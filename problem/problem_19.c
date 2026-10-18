// Write a C program to check whether a student has passed all subjects
//  and then determine whether the student is eligible for admission based on total marks.  
#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total; 
    int cutoff = 150;

    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        
        total = sub1 + sub2 + sub3;
        printf("Passed all subjects! Total Marks: %d\n", total);

        if (total >= cutoff) {
            printf("Eligible for admission.");
        } else {
            printf("Not eligible for admission.");
        }

    } else {
        printf("Not eligible for admission.\n");
    }

    return 0;
}