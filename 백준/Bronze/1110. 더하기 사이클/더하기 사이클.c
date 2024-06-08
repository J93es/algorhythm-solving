#include <stdio.h>

int main(void)
{
    int num=1, num1=1, ten=1, one=1, result=100, i=0;
    scanf("%d", &num);
    
    if (num<10)
        num = 10*num;
    
    num1 = num;
    
    while(result != num)
    {
        ten = num1/10;
        one = num1%10;
        result = 10*one + (ten+one)%10;
        i++;
        num1 = result;
    }
    printf("%d", i);
    
}
