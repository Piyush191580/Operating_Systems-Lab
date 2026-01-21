#include <stdio.h>
int main() {
int n;
int fact=1;
printf("Enter the number: ");
scanf("%d",&n);

while(n>0){
fact = fact*n;
n--;
}
printf("This is factorial of number : %d",fact);
return 0;
} 
