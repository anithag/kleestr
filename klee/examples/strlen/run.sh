#!/bin/bash

usage() {

 echo "Usage: $0 <file>.c"
 exit 1
}

if [ $# -eq 0 ] 
then
   usage
fi
   llvm-gcc -c -g --emit-llvm $1
   #klee --write-smt2s --use-metasmt=cvc4 `basename $1 .c`.o
   klee --use-metasmt=cvc4 --use-forked-solver=0 --use-cache=0 --use-cex-cache=0 `basename $1 .c`.o
