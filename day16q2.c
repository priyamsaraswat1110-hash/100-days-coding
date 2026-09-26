#include <stdio.h>

int main() {
    long long num, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("\n%lld is NOT a palindrome (negative numbers cannot be palindromes).\n", num);
    } else {
        original = num;

        while (num > 0) {
            int remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (original == reversed) {
            printf("\n%lld is a palindrome.\n", original);
        } else {
            printf("\n%lld is NOT a palindrome.\n", original);
        }
    }

    return 0;
}