export LD_LIBRARY_PATH=/home/anitha/kleestr/metasmt/deps/boost-1_55_0/lib:/home/anitha/kleestr/metasmt/deps/Z3-git/lib
export PATH=~/kleestr/llvm-gcc4.2-2.9-x86_64-linux/bin/:$PATH
export C_INCLUDE_PATH=/usr/include/x86_64-linux-gnu

CXXFLAGS="-g -O0" CFLAGS="-g -O0" ./configure --with-llvm=/home/anitha/kleestr/llvm-2.9/ --with-stp=/home/anitha/kleestr/stp-r940/install --with-uclibc=/home/anitha/kleestr/klee-uclibc --enable-posix-runtime --with-metasmt=/home/anitha/kleestr/metasmt/build/root --with-runtime=Debug+Asserts
make ENABLE_OPTIMIZED=1
#make check
#make unittests
