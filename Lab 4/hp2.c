//Convert a decimal number to its equivalent binary number.
#include<stdio.h> 
int main() { 
int num, bin = 0, rem = 0, place = 1; 
printf("Enter a decimal number\n"); 
scanf("%d", &num); 
printf("Binary equivalent of %d is ", num); 
while(num) 
{ 
rem = num % 2; 
num = num / 2; 
bin = bin + (rem * place); 
place = place * 10; 
} 
printf("%d\n", bin); 
return 0; 
}