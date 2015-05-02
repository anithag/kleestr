KLEEHOME=$HOME
export PATH=$KLEEHOME/kleestr-release/klee/Release+Asserts/bin:$KLEEHOME/kleestr-release/llvm-2.9/Release+Asserts/bin:$KLEEHOME/kleestr-release/llvm-gcc4.2-2.9-x86_64-linux/bin:$PATH
export LD_LIBRARY_PATH=$KLEEHOME/kleestr-release/metasmt/deps/Z3-git/lib:$KLEEHOME/kleestr-release/metasmt/deps/boost-1_55_0/lib:$KLEEHOME/kleestr-release/metasmt/deps/cvc4-1.4/lib:$LD_LIBRARY_PATH
export C_INCLUDE_PATH=$KLEEHOME/kleestr-release/klee/include:/usr/include/x86_64-linux-gnu/:$C_INCLUDE_PATH
export CPLUS_INCLUDE_PATH=$KLEEHOME/kleestr-release/klee/include:/usr/include/x86_64-linux-gnu/:$CPLUS_INCLUDE_PATH
