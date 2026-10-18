// 22. Write a C program to calculate a student's result using:
// • Marks in 3 subjects 
// • Minimum 40 in every subject
// • Total marks for overall grade
#include<stdio.h>  
int main() {
    int sub1, sub2, sub3, total;
    float percentage;

    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {

        total = sub1 + sub2 + sub3;
        percentage = total / 3;

        printf("Passed all subjects! Total Marks: %d/300\n", total);
        // printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 90) {
            printf("Grade: O ");
        } else if (percentage >= 75) {
            printf("Grade: A ");
        } else if (percentage >= 60) {
            printf("Grade: B ");
        } else if (percentage >= 50) {
            printf("Grade: C ");
        } else {
            printf("Grade: D ");
        }
    } else {
        printf("Failed in one or more subject");
    }

    return 0;
}