#!/bin/bash
echo "Enter two numbers:"
read a
read b

if [ $b -eq 0 ]
then
    echo "Division by zero not allowed"
else
    result=$((a / b))
    echo "Division = $result"
fi
