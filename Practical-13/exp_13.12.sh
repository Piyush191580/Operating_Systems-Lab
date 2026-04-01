#!/bin/bash

echo "Enter marks:"
read marks

if [ $marks -ge 75 ]
then
    echo "Distinction"
elif [ $marks -ge 65 ]
then
    echo "First Class"
elif [ $marks -ge 55 ]
then
    echo "Second Class"
else
    echo "Fail"
fi
