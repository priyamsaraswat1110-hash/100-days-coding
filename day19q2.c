#include <stdio.h>

int main() {
    long long num, temp, sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("\nSum of digits of %lld = %lld\n", num, sum);

    return 0;
}