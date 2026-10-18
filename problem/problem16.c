// Write a C program to display the day of the week based on a number from 1 to 7.
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day == 1) {
        printf("Monday");
    } 
    else if (day == 2) {
        printf("Tuesday");
    } 
    else if (day == 3) {
        printf("Wednesday");
    } 
    else if (day == 4) {
        printf("Thursday");
    } 
    else if (day == 5) {
        printf("Friday");
    } 
    else if (day == 6) {
        printf("Saturday");
    } 
    else if (day == 7) {
        printf("Sunday");
    } 
   
    return 0;
}