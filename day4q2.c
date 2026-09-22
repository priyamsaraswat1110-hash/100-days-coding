#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n > 0) {
        long long sum = (long long)n * (n + 1) / 2;
        printf("\nSum of the first %d natural numbers: %lld\n", n, sum);
    } else {
        printf("Error: n must be a positive integer.\n");
    }

    return 0;
}