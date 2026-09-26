#include <stdio.h>

int main() {
    long long num, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    original = num;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("\nOriginal number: %lld\n", original);
    printf("Reversed number: %lld\n", reversed);

    return 0;
}