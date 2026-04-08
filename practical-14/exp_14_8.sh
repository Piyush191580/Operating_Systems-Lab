
#!/bin/bash

n=5
i=1
sum=0

while [ $i -le $n ]
do
  sum=$((sum + i))
  ((i++))
done

echo "Sum of first $n numbers is $sum"
