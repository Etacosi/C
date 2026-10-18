// WAP to compare two strings.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, a = 0;

    printf("Enter first string: ");
    gets (str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            a = 1;
            break;
        }
        i++;
    }

    if (a == 0) {
        printf("\nBoth strings are equal.\n");
    } else if (str1[i] > str2[i]) {
        printf("\nFirst string is greater than Second string.\n");
    } else {
        printf("\nFirst string is smaller than Second string.\n");
    }

    return 0;
}