#include <stdio.h>

int main() {
    long long num1, num2;

    printf("Enter two integers: ");
    scanf("%lld %lld", &num1, &num2);

    long long a = (num1 < 0) ? -num1 : num1;
    long long b = (num2 < 0) ? -num2 : num2;

    if (a == 0 && b == 0) {
        printf("\nHCF (GCD) of 0 and 0 is undefined.\n");
    } else {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        printf("\nHCF (GCD) of %lld and %lld is: %lld\n", num1, num2, a);
    }

    return 0;
}