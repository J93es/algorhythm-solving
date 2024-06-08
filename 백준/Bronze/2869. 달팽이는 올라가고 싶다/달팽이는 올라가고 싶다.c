#include <stdio.h>


int main(void)
{
    long long A, B, V;
    scanf("%lld %lld %lld", &A, &B, &V);
    long long temp = 0, cnt = 0;
    
    temp = V - A;
    if (temp % (A-B) ==0)
        cnt = temp / (A-B) + 1;
    else
        cnt = temp / (A-B) + 2;
    
    printf("%lld", cnt);
}