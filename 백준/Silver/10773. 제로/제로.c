#include <stdio.h>

#define MAX_K 200000

int main(void)
{
    int K, i = 0, j = 0;
    long long arr[MAX_K] = { 0, }, result = 0;
    
    scanf("%d", &K);
    for(int i=0; i<K; i++)
        scanf("%lld", &arr[i]);
    
    for (i=0; i<K; i++)
        if (arr[i] == 0)
        {
            for (j=i; j<K-1; j++)
                arr[j-1] = arr[j+1];
            K -= 2;
            i -= 3;
        }
    
    for (int i=0; i<K; i++)
        result += arr[i];
    printf("%lld", result);
}