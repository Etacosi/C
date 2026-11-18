// Write a program in C to extract a substring from a given string.
// Test Data :
// Input the string : this is test string
// Input the position to start extraction :9
// Input the length of substring :4
#include <stdio.h>

int main() {
    char str[100], sub[100];
    int a, b, i;

    printf("Input the string: ");
    gets (str);

    printf("Input the position to start extraction: ");
    scanf("%d", &a);

    printf("Input the length of substring: ");
    scanf("%d", &b);

    for (i = 0; i < b && str[a + i] != '\0'; i++) {
        sub[i] = str[a + i];
    }
    sub[i] = '\0';
    puts (sub);

    return 0;
}