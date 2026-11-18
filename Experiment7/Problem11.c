// Write a program in C to combine two strings manually.
// Test Data :
// Input the first string : this is string one
// Input the second string : this is string two
#include <stdio.h>

int main() {
    char str[100], str1[100], new[200];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str);

    printf("Enter second string: ");
    gets(str1);

    while (str[i] != '\0') {
        new[i] = str[i];
        i++;
    }

    while (str1[j] != '\0') {
        new[i + j] = str1[j];
        j++;
    }

    new[i + j] = '\0';

    printf("Combined string: %s", new);
    return 0;
}