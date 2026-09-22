#include <stdio.h>

double power(double base, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double principal, rate;
    int time;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years as a whole number): ");
    scanf("%d", &time);

    if (principal > 0 && rate >= 0 && time > 0) {
        double simple_interest = (principal * rate * time) / 100.0;
        
        double amount = principal * power(1.0 + (rate / 100.0), time);
        double compound_interest = amount - principal;

        printf("\nSimple Interest: %.2lf\n", simple_interest);
        printf("Compound Interest: %.2lf\n", compound_interest);
        printf("Total Amount (Compound): %.2lf\n", amount);
    } else {
        printf("Error: Principal, rate, and time must be non-negative values.\n");
    }

    return 0;
}