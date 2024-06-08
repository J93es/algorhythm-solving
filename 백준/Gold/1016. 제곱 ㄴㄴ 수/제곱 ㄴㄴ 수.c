#include <stdio.h>

#define MAX_LEN 1000001


int main(void)
{
        int arr[MAX_LEN] = { 0, };
        long long min, max, cnt = 0;
        scanf("%lld %lld", &min, &max);
        
        for (long long i=2; i*i<=max; i++)
        {
                for (long long j=min/(i*i); i*i*j<=max; j++)
                        if (i*i*j >= min)
                                arr[i*i*j - min] = 1;
        }
        for (long long i=0; i<=max-min; i++)
                if (arr[i] == 0)
                        cnt++;
        printf("%lld", cnt);
}