#include <stdio.h>


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}
int main() {
    float num1, num2, result;
    char op;

    float (*operation)(float, float) = NULL;

   
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    switch (op) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    result = operation(num1, num2);
    printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}