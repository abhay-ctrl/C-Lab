//Input a number and a digit and find whether the digit is present in the number or not, if present then count the number of times it occurs in the number.
#include <stdio.h>

int main() {

  int n, dig,tm = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Enter an integer: ");
  scanf("%d", &dig);

  while (n != 0) {
    remainder = n % 10;
    if(dig==remainder)
        tm++;
    n /= 10;
  }
    printf("No of times Digit Used In The Number = %d", tm);

  return 0;
}