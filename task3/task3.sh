#!/bin/bash
for num in {1..20}; do
	touch $num.txt;
done
for num in {1..20}; do
	if [[ $num != *4* ]]; then
		rm $num.txt
	fi
done
