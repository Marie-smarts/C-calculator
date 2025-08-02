#include <stdio.h>

int main() {
    char op;
    double a, b;

    // Prompt the user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // The space before %c helps skip leftover newline

    // Prompt the user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    // Perform the calculation based on the operator
    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
