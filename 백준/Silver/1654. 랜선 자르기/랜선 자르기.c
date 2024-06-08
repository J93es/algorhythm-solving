#include <stdio.h>

int K = 0 , N = 0;
long long arr[10001] = {0, };

long long BinarySearch(long long min, long long max)
{
    while (min <= max)
    {
        int cnt = 0;
        long long mid = (min + max) / 2;
    
        for (int i=0; i <= K; i++)
            cnt += arr[i] / mid;
        
        if (cnt >= N)
            min = mid + 1;
        else
            max = mid - 1;
    }
    return max;
}


int main(void)
{
    long long max = 0;
    scanf("%d %d", &K, &N);
    
    for(int i=0; i<K; i++)
    {
        scanf("%lld", &arr[i]);
        if(max<arr[i])
            max = arr[i];
    }
    printf("%lld", BinarySearch(1, max));
}