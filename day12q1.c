#include <stdio.h>

int main() {
    int days;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("\nError: Late days cannot be negative.\n");
    } else if (days == 0) {
        printf("\nNo fine. Book returned on time.\n");
    } else if (days <= 5) {
        int fine = days * 2;
        printf("\nTotal fine: Rs. %d\n", fine);
    } else if (days <= 10) {
        int fine = (5 * 2) + ((days - 5) * 4);
        printf("\nTotal fine: Rs. %d\n", fine);
    } else if (days <= 30) {
        int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("\nTotal fine: Rs. %d\n", fine);
    } else {
        printf("\nMembership Cancelled.\n");
    }

    return 0;
}