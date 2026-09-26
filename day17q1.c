#include <stdio.h>

int main() {
    long long num, temp, original;
    int digits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("\n%lld is NOT an Armstrong number (negative numbers are excluded).\n", num);
    } else if (num == 0) {
        printf("\n0 is an Armstrong number.\n");
    } else {
        original = num;

        temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        long long sum = 0;
        temp = num;
        while (temp > 0) {
            int remainder = temp % 10;

            long long power = 1;
            for (int i = 0; i < digits; i++) {
                power *= remainder;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == original) {
            printf("\n%lld is an Armstrong number.\n", original);
        } else {
            printf("\n%lld is NOT an Armstrong number.\n", original);
        }
    }

    return 0;
}