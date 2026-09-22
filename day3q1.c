#include <stdio.h>

int main() {
    double celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    printf("\nTemperature in Fahrenheit: %.2lf\n", (celsius * 9.0 / 5.0) + 32.0);

    return 0;
}