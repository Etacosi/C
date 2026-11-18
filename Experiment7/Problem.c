// WAP in C to prepare a calculator using menu-driven programming
// and function where user enters values and selects the operation (+, -, *, /, %).
#include <stdio.h>

int calc(int a, int b, char o) {
    switch (o) {
        case '+':
        return a + b;
        case '-':
        return a - b;
        case '*':
        return a * b;
        case '/':
        return a / b;
        case '%':
        return a % b;
    }
}

int main() {
    int a, b, c;
    char o;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Select operation (+, -, *, /, %%): ");
    scanf(" %c", &o);

    c = calc(a, b, o);
    printf("Result: %d", c);

    return 0;
}