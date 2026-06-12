#include <stdio.h>

int minimum(int a, int b);
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = minimum(a, b);
    printf("Minimum = %d", result);
    return 0;
}
int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
