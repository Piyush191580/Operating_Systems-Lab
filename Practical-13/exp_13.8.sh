#!/bin/bash

echo "Enter first number:"
read a

echo "Enter second number:"
read b

if [ $a -gt $b ]
then
  echo "$a is greater"
else
  echo "$b is greater"
fi
