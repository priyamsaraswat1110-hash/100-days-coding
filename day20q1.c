#include <stdio.h>

int main() {
    long long num, temp;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    long long product = 1;
    int has_odd = 0;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        temp /= 10;
    }

    if (has_odd) {
        printf("\nProduct of odd digits of %lld = %lld\n", num, product);
    } else {
        printf("\nThere are no odd digits in %lld.\n", num);
    }

    return 0;
}