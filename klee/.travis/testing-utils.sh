#!/bin/bash -x
# Make sure we exit if there is a failure
set -e

if [ "${LLVM_VERSION}" != "2.9" ]; then
    # Using LLVM3.4 all we need is vanilla GoogleTest :)
    wget https://googletest.googlecode.com/files/gtest-1.7.0.zip
    unzip gtest-1.7.0.zip
    cd gtest-1.7.0/
    cmake .
    make
    # Normally I wouldn't do something like this but hey we're running on a temporary virtual machine, so who cares?
    sudo cp lib* /usr/lib/
    sudo cp -r include/gtest /usr/include
else
    # LLVM2.9 on the other hand is a pain
    
    # We need the version of GoogleTest used in LLVM2.9
    # This is a hack
    old_dir=`pwd`
    cd "${KLEE_SRC}"
    cd tools/
    svn export http://llvm.org/svn/llvm-project/llvm/branches/release_29/utils/unittest unittest

    # Now put the header files in the search path so building will succeed
    sudo cp -r unittest/googletest/include/gtest /usr/include/

    # We need the FileCheck and not utilites as well because they aren't in the llvm-2.9-dev package
    for tool in FileCheck not; do
        svn export http://llvm.org/svn/llvm-project/llvm/branches/release_29/utils/${tool} ${tool}
        # Patch the Makefile so it will work in KLEE's build system
        sed -i 's/^USEDLIBS.*$/LINK_COMPONENTS = support/' ${tool}/Makefile
    done

    # Now hack the make file to build the unittest library and the FileCheck and not tools
    sed -i '0,/^PARALLEL_DIRS/a PARALLEL_DIRS += unittest FileCheck not' Makefile

    cd "${old_dir}"
fi

