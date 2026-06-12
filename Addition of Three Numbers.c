#include <stdio.h>
int add3(int a, int b, int c);
int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = add3(a, b, c);
    printf("Sum = %d", result);
    return 0;
}
int add3(int a, int b, int c)
{
    return a + b + c;
}
