#!/bin/bash

function main {
        while [ $count -le 20 ]
                do
                        ./a.out ./lotto-results/lotto-results-20$count.csv >> results.txt
                        count=`expr $count + 1`
                done
        	cat results.txt
        	rm results.txt lottonumbers.txt a.out
}

g++ process.cpp
./a.out
echo "Your Lottery Numbers: " && cat lottonumbers.txt
g++ main.cpp
count=14
FILE=./results.txt
if [ -f "$FILE" ]; then
	rm results.txt
	main
else
	main
fi
