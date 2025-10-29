#include <stdio.h>

int main(void)
{
    int x, y;
    char op;

    printf("operator: ");
    scanf("%c", &op);

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    if (op == '+')
    {
        printf("answer: %d\n", x + y);
        return 0;
    }
    else if (op == '-')
    {
        printf("answer: %d\n", x - y);
        return 0;
    }
    else if (op == '*')
    {
        printf("answer: %d\n", x * y);
        return 0;
    }
    else if (op == '/')
    {
        printf("answer: %d\n", x / y);
        return 0;
    }
    else
    {
        printf("invalid operator");
        return 0;
    }
    return 0;
}