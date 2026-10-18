//  Print number pattern: 
//   1
//   1 2 
//   1 2 3 
//   1 2 3 4 
#include<stdio.h>
int main(){
    int i = 1, j = 1;
    while( i <= 4 ){
        j = 1;
        while( j <= i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}