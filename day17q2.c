#include <stdio.h>

int main() {
    long long num;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num <= 1) {
        printf("\n%lld is NOT a prime number.\n", num);
    } else {
        int is_prime = 1;

        for (long long i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("\n%lld is a prime number.\n", num);
        } else {
            printf("\n%lld is NOT a prime number.\n", num);
        }
    }

    return 0;
}
