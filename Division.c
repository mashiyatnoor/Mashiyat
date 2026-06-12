#include <stdio.h>
float divide(float a, float b);
int main()
{
    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    result = divide(a, b);
    printf("Quotient = %.2f", result);
    return 0;
}
float divide(float a, float b)
{
    return a / b;
}
