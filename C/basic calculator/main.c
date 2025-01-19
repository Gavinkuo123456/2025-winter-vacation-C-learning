#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    char op;
    float num2;
    printf("first num = ");
    scanf("%f", &num1);
    printf("op = ");
    scanf(" %c", &op);
    printf("second num = ");
    scanf("%f", &num2);
    printf("formula: %f %c %f = ", num1, op, num2);
    switch (op)
    {
    case '+':
        printf("%f", num1 + num2);
        break;
    case '-':
        printf("%f", num1 - num2);
        break;
    case '*':
        printf("%f", num1 * num2);
        break;
    case '/':
        printf("%f", num1 / num2);
        break;

    default:
        printf("error");
        break;
    }
    return 0;
}