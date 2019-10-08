//A simple calculator written in C requesting input from the user

#include <stdio.h>

int main(int argc, char *argv[]) {
    char op;
    float num1, num2;
    float result = 0;
    while(op != 'X'){
        printf("Enter the operation (+, -, *, /) or X to quit: ");
        scanf(" %c", &op);
        if(op == 'X'){
            printf("Exiting program\n");
            continue;
        }

        printf("Enter the first number: ");
        scanf(" %f", &num1);

        printf("Enter the second number: ");
        scanf(" %f", &num2);

        switch(op){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("Invalid input. Please try again\n");
                continue;
        }
        printf("Result: %.1f %c %.1f = %.1f\n", num1, op, num2, result);
    }
    return 0;
}