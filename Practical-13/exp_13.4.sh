#!/bin/bash

echo "Enter country name:"
read country

if [ "$country" = "india" ]
then
  echo "India"
elif [ "$country" = "nepal" ]
then
  echo "Nepal"
else
  echo "Country is not matching with India or Nepal"
fi
