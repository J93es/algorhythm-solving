#include <stdio.h>

int main(void)
{
    double num1, num2;
    double result;
    scanf("%lf %lf", &num1, &num2);
    result = num1 / num2;
    printf("%.9f", result);
}
