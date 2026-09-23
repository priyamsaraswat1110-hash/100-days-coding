#include <stdio.h>

int main() {
    double cost_price, selling_price;

    printf("Enter Cost Price: ");
    scanf("%lf", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%lf", &selling_price);

    if (cost_price > 0 && selling_price >= 0) {
        if (selling_price > cost_price) {
            double profit = selling_price - cost_price;
            double profit_percent = (profit / cost_price) * 100.0;
            printf("\nProfit: %.2lf\n", profit);
            printf("Profit Percentage: %.2lf%%\n", profit_percent);
        } else if (cost_price > selling_price) {
            double loss = cost_price - selling_price;
            double loss_percent = (loss / cost_price) * 100.0;
            printf("\nLoss: %.2lf\n", loss);
            printf("Loss Percentage: %.2lf%%\n", loss_percent);
        } else {
            printf("\nNo Profit, No Loss.\n");
        }
    } else {
        printf("\nError: Cost price must be greater than zero and selling price cannot be negative.\n");
    }

    return 0;
}