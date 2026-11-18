// Write a program in C to find the number of times a given word 'the' 
// appears in the given string.
// Test Data :
// Input the string : The string where the word the present more than once.
// Expected Output :
// The frequency of the word 'the' is : 3
#include <stdio.h>

int main() {
    char str[100] = "The string where the word the present more than once";
    char sub[100] = "the";
    int i, j, k = 0;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0' && str[i + j] == sub[j]; j++) {
            if (sub[j + 1] == '\0') {
                k++;
            
            }
        }
    }
    printf("The frequency of the word '%s' is: %d",sub,k);
    return 0;
}