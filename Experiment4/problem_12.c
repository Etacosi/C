// WAP to Find the first 10 prime number. 
#include <stdio.h>

int main() {
    int z = 0,i = 2,a = 2;   

    printf("First 10 prime numbers: ");

    while (z < 10) {
        if (i * i > a) { 
            printf("%d ", a);
            z++;
            a++;
            i = 2;
        } 
        else if (a % i == 0) {
            a++;
            i = 2;
        } 
        else { 
            i++;
        }
    }
    return 0;
}