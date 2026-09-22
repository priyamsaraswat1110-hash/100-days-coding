#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\n%d is even.\n", num);
    } else {
        printf("\n%d is odd.\n", num);
    }

    return 0;
}