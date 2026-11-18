//Take user input a uppercase string (S) and you have to return a 
// string that is the lower case form of S.
#include <stdio.h>
int main() {
    char str[10];
    int i;
    printf("Enter string in Uppercase: ");
    gets (str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    puts (str);
    return 0;
}