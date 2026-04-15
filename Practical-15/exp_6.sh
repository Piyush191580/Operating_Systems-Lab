#!/bin/bash

echo "Choose option:"
echo "a = Leap Year"
echo "b = Even or Odd"
echo "c = Largest of 3 numbers"

read choice

case $choice in

a)
    echo "Enter year:"
    read year
    if (( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ))
    then
        echo "Leap Year"
    else
        echo "Not a Leap Year"
    fi
    ;;

b)
    echo "Enter number:"
    read num
    if (( num % 2 == 0 ))
    then
        echo "Even Number"
    else
        echo "Odd Number"
    fi
    ;;

c)
    echo "Enter three numbers:"
    read a b c
    if (( a >= b && a >= c ))
    then
        echo "Largest = $a"
    elif (( b >= a && b >= c ))
    then
        echo "Largest = $b"
    else
        echo "Largest = $c"
    fi
    ;;

*)
    echo "Invalid option"
    ;;

esac
