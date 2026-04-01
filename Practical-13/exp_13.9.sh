#!/bin/bash

echo "Enter first number:"
read a

echo "Enter second number:"
read b

echo "Enter third number:"
read c

if [ $a -ge $b ] && [ $a -ge $c ]
then
    echo "$a is the greatest"
elif [ $b -ge $a ] && [ $b -ge $c ]
then
    echo "$b is the greatest"
else
    echo "$c is the greatest"
fi
