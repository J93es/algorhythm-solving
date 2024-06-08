#include <stdio.h>

int main(void)
{
    long long a = 1;
    long long b = 1;
    
    while (!(a == 0 && b == 0))
    {
        scanf("%lld %lld", &a, &b);
        if (a > b && !(a == 0 && b == 0))
            printf("Yes\n");
        else if (!(a == 0 && b == 0))
            printf("No\n");
    }
}