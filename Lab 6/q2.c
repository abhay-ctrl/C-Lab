#include <stdio.h>
void main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Alphabet is a vowel");
        break;
    default:
        printf("Alphabet is a constant");
    }
}
