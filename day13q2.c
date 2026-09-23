#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n > 0) {
        printf("\nNumbers from 1 to %d:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("\nError: Please enter a number greater than 0.\n");
    }

    return 0;
}