#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    int int1, int2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            int1 = (int)num1;
            int2 = (int)num2;
            if (int2 != 0) {
                printf("\n%d %% %d = %d\n", int1, int2, int1 % int2);
            } else {
                printf("\nError: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nError: Invalid operator! Please use +, -, *, /, or %%\n");
            break;
    }

    return 0;
}