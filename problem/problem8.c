// Write a C program to create a simple menu-driven calculator using if-else-if:  
// • Addition  • Subtraction  • Multiplication  • Division  • Modulus
#include<stdio.h>
int main()
{
    int a,b;
    int choice ;
    float f;

    printf("Enter two numbers ");
    scanf("%d %d",&a,&b );
  

    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    f = a / b ;

    if (choice == 1) {
        printf("Result: %d + %d = %d\n", a, b, a + b);
    } else if (choice == 2) {
        printf("Result: %d - %d = %d\n", a, b, a - b);
    } else if (choice == 3) {
        printf("Result: %d * %d = %d\n", a, b, a * b);
    } else if (choice == 4) {
        printf("Result: %d / %d = %.2f\n", a, b, f);
    } else if (choice == 5) {
        printf("Result: %d %% %d = %d\n", a, b, a % b);
    }
    return 0;
}