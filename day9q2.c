#include <stdio.h>

int main() {
    double percentage;

    printf("Enter percentage (0-100): ");
    scanf("%lf", &percentage);

    if (percentage >= 0 && percentage <= 100) {
        if (percentage >= 90) {
            printf("\nGrade: A\n");
        } else if (percentage >= 80) {
            printf("\nGrade: B\n");
        } else if (percentage >= 70) {
            printf("\nGrade: C\n");
        } else if (percentage >= 60) {
            printf("\nGrade: D\n");
        } else {
            printf("\nGrade: F\n");
        }
    } else {
        printf("\nError: Please enter a valid percentage between 0 and 100.\n");
    }

    return 0;
}