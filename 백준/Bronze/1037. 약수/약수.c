#include <stdio.h>

int main()
{
    long long n, i, j, temp, result, arr[1000000]={0, };
    
    scanf("%lld", &n);
    if (n==1)
    {
        scanf("%lld", &temp);
        result = temp*temp;
    }
    else
    {
        for(i=0; i<n; i++)
            scanf("%lld", &arr[i]);
        
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if (arr[j]<arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        result = arr[0]*arr[n-1];
    }
    printf("%lld\n", result);
}