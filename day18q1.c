#include <stdio.h>

int main() {
    long long num;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    if (num <= 0) {
        printf("\nError: Please enter a positive integer greater than 0.\n");
    } else {
        printf("\nFactors of %lld are:\n", num);

        for (long long i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%lld ", i);
            }
        }
        printf("\n");
    }

    return 0;
}