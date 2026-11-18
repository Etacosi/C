// Write a program to remove all the occurrences of a character in the string.
#include <stdio.h>

int main() {
    char str[100], str1[100];
    char o;
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to remove: ");
    scanf(" %c", &o);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != o) {
            str1[j] = str[i];
            j++;
        }
    }

    str1[j] = '\0';

    printf("String after removing '%c': %s", o, str1);

    return 0;
}

