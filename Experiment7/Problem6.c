// Take user input a sentence string (S) and return the string without spaces.
#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter the string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
    printf("String after removing spaces: ");
    puts(str);
    return 0;
}