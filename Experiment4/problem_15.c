// Print an inverted triangle:  
// * * * *
// * * *
// * * 
// *
#include<stdio.h>
int main(){
    int i = 4, j = 1;
    while( i >= 1 ){
        j = 1;
        while( j <= i){
            printf("* ");
            j++;
        }
        printf("\n");
        --i;
    }
    return 0;
}