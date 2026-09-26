#include <stdio.h>

int main() {
    long long num1, num2;

    printf("Enter two integers: ");
    scanf("%lld %lld", &num1, &num2);

    long long a = (num1 < 0) ? -num1 : num1;
    long long b = (num2 < 0) ? -num2 : num2;

    if (a == 0 || b == 0) {
        printf("\nLCM of %lld and %lld is 0.\n", num1, num2);
    } else {
        long long temp_a = a;
        long long temp_b = b;

        while (temp_b != 0) {
            long long temp = temp_b;
            temp_b = temp_a % temp_b;
            temp_a = temp;
        }

        long long hcf = temp_a;
        long long lcm = (a / hcf) * b;

        printf("\nLCM of %lld and %lld is: %lld\n", num1, num2, lcm);
    }

    return 0;
}