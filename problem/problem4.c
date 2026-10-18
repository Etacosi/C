// 11. Write a C program to display the grade based on marks: 
//  • 90–100 → A  • 75–89 → B  • 60–74 → C  • 40–59 → D  • Below 40 → Fail  
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter your marks: ");
    scanf("%d",&a);
    
    if(a >= 90 && a < 100 )
    printf("Your Grade is A");
    
    else if(a >= 75 && a < 90 )
    printf("Your Grade is B");

    else if(a >= 60 && a < 75 )
    printf("Your Grade is C");

    else if(a >= 40 && a < 60 )
    printf("Your Grade is D");

    else if(a < 40 )
    printf("You are Fail");

    return 0;
}