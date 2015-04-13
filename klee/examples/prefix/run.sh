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
   klee --write-smt2s `basename $1 .c`.o
