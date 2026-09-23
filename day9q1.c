#include <stdio.h>

double square_root(double num) {
    if (num <= 0) return 0;
    double x = num;
    for (int i = 0; i < 20; i++) {
        x = 0.5 * (x + num / x);
    }
    return x;
}

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("\nError: Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 0;
    }

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        double root1 = (-b + square_root(discriminant)) / (2 * a);
        double root2 = (-b - square_root(discriminant)) / (2 * a);
        printf("\nCategory: Real and Distinct Roots\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("\nCategory: Real and Equal Roots\n");
        printf("Root 1 = Root 2 = %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = square_root(-discriminant) / (2 * a);
        printf("\nCategory: Complex and Imaginary Roots\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}