#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year > 0) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("\n%d is a leap year.\n", year);
        } else {
            printf("\n%d is not a leap year.\n", year);
        }
    } else {
        printf("Error: Please enter a valid positive year.\n");
    }

    return 0;
}