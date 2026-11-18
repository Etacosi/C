
// Write a C program to check whether a substring is present in a string.
// Test Data :
// Input the string : This is a test string.
// Input the substring to be search : search
#include <stdio.h>

int main() {
    char str[100], sub[100];
    int i, j, k = 0;

    printf("Enter the string: ");
    gets (str);

    printf("Enter the substring: ");
    gets (sub);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0' && str[i + j] == sub[j]; j++) {
            if (sub[j + 1] == '\0') {
                k = 1;
                break;
            }
        }
        if (k)
            break;
    }

    if (k)
        printf("Substring found in the string.");
    else
        printf("Substring not found in the string.");

    return 0;
}