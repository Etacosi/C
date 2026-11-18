// WAP to two strings input from the user. If the first character of 
// second string and last character of the first string matches then concatenate them as a single one.
#include <stdio.h>
#include <string.h>

int main() {
    char str[50], str1[50], new[100];
    int len1, len2;

    printf("Enter first string: ");
    gets (str);

    printf("Enter second string: ");
    gets(str1);

    len1 = strlen(str);
    len2 = strlen(str1);

    if (str[len1 - 1] == str1[0]) {
        strcpy(new, str);
        strcat(new, str1);

        printf("Concatenated string: %s", new);
    } else {
       printf("Concatenation of string not allowed. ");
    }

    return 0;
}
