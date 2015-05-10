#!/bin/sh

#/home/anitha/kleestr/metasmt/bootstrap.sh --deps deps/ --non-free -m RELEASE build/
/home/zehranaz/kleestr/metasmt/bootstrap.sh --deps deps/ --free -m RELEASE build/
export C_INCLUDE_PATH=~/kleestr/metasmt/deps/boost-1_55_0/include:$C_INCLUDE_PATH
cd build
make
make install
