#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("\nThe number is zero.\n");
        } else {
            printf("\n%d is positive.\n", num);
        }
    } else {
        printf("\n%d is negative.\n", num);
    }

    return 0;
}