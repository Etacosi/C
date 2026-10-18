// Write a C program to calculate a salary bonus
//  based on years of service and salary using nested if-else.  
#include <stdio.h>

int main() {
    float bonus, Total_salary;
    int salary, years;

    printf("Enter basic salary: ");
    scanf("%d", &salary);

    printf("Enter years of service: ");
    scanf("%d", &years);

    if (years >= 5) {
        if (salary > 50000) {
            bonus = salary * 0.15;
        } else {
            bonus = salary * 0.10;
        }
    } else {
        bonus = salary * 0.05;    
    }

    Total_salary = salary + bonus;

    printf("Base Salary : $%d\n", salary);
    printf("Bonus Amount: $%.2f\n", bonus);
    printf("Net Salary  : $%.2f\n", Total_salary);

    return 0;
}