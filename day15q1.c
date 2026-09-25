#include <stdio.h>

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        long long factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("\nFactorial of %d = %lld\n", n, factorial);
    } else {
        printf("\nError: Factorial of a negative number does not exist.\n");
    }

    return 0;
}