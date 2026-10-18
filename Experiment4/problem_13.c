// Print a square pattern:
// *  *  *
// *  *  *
// *  *  *
#include<stdio.h>
int main(){
    int i = 1, j = 1;
    while( i <= 3 ){
        j = 1;
        while( j <= 3){
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}