#include <stdio.h>

int main() {
    double units;

    printf("Enter electricity units consumed: ");
    scanf("%lf", &units);

    if (units >= 0) {
        double bill = 0.0;

        if (units <= 100) {
            bill = units * 5.0;
        } else if (units <= 200) {
            bill = (100.0 * 5.0) + ((units - 100.0) * 7.0);
        } else if (units <= 300) {
            bill = (100.0 * 5.0) + (100.0 * 7.0) + ((units - 200.0) * 10.0);
        } else {
            bill = (100.0 * 5.0) + (100.0 * 7.0) + (100.0 * 10.0) + ((units - 300.0) * 12.0);
        }

        printf("\nTotal Electricity Bill: Rs. %.2lf\n", bill);
    } else {
        printf("\nError: Units consumed cannot be negative.\n");
    }

    return 0;
}