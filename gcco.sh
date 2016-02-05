#!/bin/sh

if [ $# -ne 1 ]; then
	echo "invalid params"
	exit 1
fi

g++ -Wall -o ${1}.exe ${1}.cpp
./${1}.exe

