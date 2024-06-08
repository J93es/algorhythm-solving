#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d \n%d", &num1, &num2);
    printf("%d \n%d \n", num1 * (num2%10), num1 * (((num2%100)-(num2%10))/10) );
    printf("%d \n%d", num1 * (num2/100), num1 * num2 );
}