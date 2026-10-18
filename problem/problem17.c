// Write a C program to calculate electricity charges based on different consumption ranges.  
#include <stdio.h>

int main() {
    float units, total;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        total = units * 5.0;            
    } 
    else if (units <= 200) {
        total = (100 * 5.0) + ((units - 100) * 7.0);  
    } 
    else if (units <= 300) {
        total = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0); 
    } 
    else {
        total = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    printf("Total Electricity Charges = $%.2f\n", total);

    return 0;
}