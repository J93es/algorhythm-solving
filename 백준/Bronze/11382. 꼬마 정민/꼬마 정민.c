#include <stdio.h>

int main(void)
{
    long long arr[3];
    
    scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
    printf("%lld", arr[0] + arr[1] + arr[2]);
}