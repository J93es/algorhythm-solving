#include <stdio.h>

int main(void)
{
    long long N;
    scanf("%lld", &N);
    long long temp = N, num = 1, i = 0;
    
    for (i=1; temp > 0; i++)
    {
        temp = temp - num;
        num = 6 * i;
        //printf("%lld %lld %lld\n", i, num, temp);
    }
    
    printf("%lld", i-1);
}