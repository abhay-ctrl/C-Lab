// Write a c porgram to input two integers and implement increment and decrement operator over them.
#include <stdio.h>
void main() {
   int a , b ;
   printf("Enter value of a :");
   scanf("%d",&a);
   printf("Enter value of b :");
   scanf("%d",&b);
   printf("%d\n", a++);
   printf("%d\n", ++b);
}