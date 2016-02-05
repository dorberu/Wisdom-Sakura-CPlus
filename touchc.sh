#!/bin/sh

if [ $# -gt 2 ]; then
	echo "invalid params"
	exit 1
fi

param=1
if [ $# -eq 2 ]; then
	param=$2
fi

expr "${param}" + 1 >/dev/null 2>&1
if [ $? -lt 2 ]; then
	for i in `seq 1 ${param}`
	do
		touch "ex${1}_${i}.cpp"
	done
else
	touch "ex${1}_${2}.cpp"
fi

