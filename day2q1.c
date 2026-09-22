#include <stdio.h>

int main() {
    double length, breadth;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter breadth: ");
    scanf("%lf", &breadth);

    if (length > 0 && breadth > 0) {
        printf("\nArea: %.2lf\n", length * breadth);
        printf("Perimeter: %.2lf\n", 2 * (length + breadth));
    } else {
        printf("Error: Length and breadth must be positive values.\n");
    }

    return 0;
}