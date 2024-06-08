#include <stdio.h>

#define MAX_LEN 500001


void Remove(int arr[], int N)
{
        for (int i=0; i<N/2; i++)
                arr[i] = arr[2*i+1];
}

int main(void)
{
        int N;
        int arr[MAX_LEN] = { 0, };
        scanf("%d", &N);
        
        for (int i=0; i<N; i++)
                arr[i] = i+1;
        
        while (N > 1)
        {
                if (N%2 == 1)
                {
                        Remove(arr, N);
                        N /= 2;
                        arr[N] = arr[0];
                        for (int i=0; i<N; i++)
                                arr[i] = arr[i+1];
                                
                }
                else
                {
                        Remove(arr, N);
                        N /= 2;
                }
        }
        printf("%d", arr[0]);
}