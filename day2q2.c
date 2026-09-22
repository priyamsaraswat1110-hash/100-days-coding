#include <stdio.h>

int main() {
    double radius;
    const double PI = 3.141592653589793;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    if (radius > 0) {
        printf("\nArea: %.2lf\n", PI * radius * radius);
        printf("Circumference: %.2lf\n", 2 * PI * radius);
    } else {
        printf("Error: Radius must be a positive value.\n");
    }

    return 0;
}