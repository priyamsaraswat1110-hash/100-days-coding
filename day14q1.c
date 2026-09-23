#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n > 0) {
        int sum = 0;
        int current_odd = 1;

        for (int i = 1; i <= n; i++) {
            sum += current_odd;
            current_odd += 2;
        }

        printf("\nSum of the first %d odd numbers: %d\n", n, sum);
    } else {
        printf("\nError: Please enter a number greater than 0.\n");
    }

    return 0;
}
