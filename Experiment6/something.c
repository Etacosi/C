//
#include <stdio.h>
void main (){
    int a,i,z,s;
    int arr[10];

    char ch[100];
    printf("Enter your name: ");
    gets (ch);
    printf("Enter your phone number: ");
    for (i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    for(a = 0 ; a < 9 ; a++){
        for(i = 0; i = 9 - a; i++){
            if(arr[i] > arr[i + 1]){
                s = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = s;
            }
        }
    }
        
        for(i = 0;ch[i] != '\0' && i < 4;i++){
            if(ch[i] >=97 && ch[i] <= 122){
            ch[i] = ch[i] - 32;
            }
            printf("%c",ch[i]);
        }
        for(i = 0;i < 3;i++){
            printf("%d",arr[i]);
        }

        





}