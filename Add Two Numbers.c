#include <stdio.h>

int add2(int a, int b);

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = add2(a, b);

    printf("Sum = %d", result);

    return 0;
}

int add2(int a, int b)
{
    return a + b;
}
