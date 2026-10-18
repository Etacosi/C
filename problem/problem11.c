// Write a C program to check whether a given character is an uppercase letter.
#include<stdio.h>
int main ()
{
    char a ;

    printf("Enter a character : ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z'){
    printf("%c is an uppercase letter.",a);
    }
    if (a < 'A' || a > 'Z'){
    printf("%c is not an uppercase letter.",a);
    }
    return 0;
    

}
