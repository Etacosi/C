// WAP to  merge a string to another string.
#include <stdio.h>
int main(){
    int a,n,i;

    // printf("Enter the Size of array: ");
    // scanf("%d",&n);
    n = 50;
    char ch[n],chs[n],chr[n];
    printf("Enter the string1: ");
    gets (ch);
     printf("Enter the string2: ");
    gets (chs);
    printf("Merged string is: ");
      for(a = 0 ; ch[a] != '\0' ; a++){
            chr[a] = ch[a];
            printf("%c",chr[a]);
      }
      for(i = 0 ; chs[i] != '\0' ; i++){
            chr[a] = chs[i];
            printf("%c",chr[a]);
            a++;
            
        }

    return 0;
}