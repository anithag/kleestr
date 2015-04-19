#!/bin/sh

#/home/anitha/kleestr/metasmt/bootstrap.sh --deps deps/ --non-free -m RELEASE build/
/home/anitha/kleestr/metasmt/bootstrap.sh --deps deps/ --free -m RELEASE build/
export C_INCLUDE_PATH=~/kleestr/metasmt/build/boost-1_55_0/include
cd build
make
make install
