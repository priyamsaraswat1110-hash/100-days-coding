#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n >= 2) {
        long long product = 1;

        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }

        printf("\nProduct of even numbers from 1 to %d: %lld\n", n, product);
    } else if (n > 0) {
        printf("\nThere are no even numbers in the range 1 to %d.\n", n);
    } else {
        printf("\nError: Please enter a number greater than 0.\n");
    }

    return 0;
}