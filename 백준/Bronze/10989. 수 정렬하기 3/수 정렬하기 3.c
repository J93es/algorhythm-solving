#include <stdio.h>

void ScanArr(long long N, int* arr)
{
    for (long long i=0; i<N; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[temp]++;
    }
}

void PrintArr(int* arr)
{
    for (int i=1; i<10001; i++)
    {
        if (arr[i] != 0)
        {
            for (long long j=0; j<arr[i]; j++)
                printf("%d\n", i);
        }
    }
}

int main(void)
{
    
    long long N;
    scanf("%lld", &N);
    int arr[10001] = { 0, };
    ScanArr(N, arr);
    PrintArr(arr);
}