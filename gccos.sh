#!/bin/sh

if [ $# -ne 2 ]; then
	echo "invalid params"
	exit 1
fi

params=""
for i in `seq 1 ${2}`
do
	g++ -Wall -c ${1}_${i}.cpp
	params="${params} ${1}_${i}.o"
done

g++ ${params} -o ${1}.exe
./${1}.exe

