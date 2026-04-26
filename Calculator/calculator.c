#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter: number operator number (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    if (op == '+') {
        printf("Result = %.2lf\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Result = %.2lf\n", num1 - num2);
    }
    else if (op == '*') {
        printf("Result = %.2lf\n", num1 * num2);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero!\n");
        } else {
            printf("Result = %.2lf\n", num1 / num2);
        }
    }
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}
