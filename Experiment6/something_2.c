// WAP to copy the string into another string. 
#include <stdio.h>
int main(){
    int a,n,i;

    // printf("Enter the Size of array: ");
    // scanf("%d",&n);
    n = 50;
    char ch[n],chs[n];
    printf("Enter the Element of array: ");
    gets (ch);

    // printf("Enter the element: ");
    // for(a = 0 ; a < n ; a++){
    //     scanf("%d",&arr[a]);
    // }
    printf("Copy of an array is: ");
      for(a = 0 ; ch[a] != 0 ; a++){
            chs[a] = ch[a];
            printf("%c",chs[a]);
      }
    


    return 0;
}