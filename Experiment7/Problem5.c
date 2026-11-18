// Take user input a lowercase string (S) and you have to return a 
// string that is the upper case form of S
#include <stdio.h>
int main() {
    char str[10];
    int i;
    printf("Enter string in lowercase: ");
    gets (str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    puts (str);
    return 0;
}