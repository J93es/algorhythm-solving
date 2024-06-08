#include <stdio.h>

#define MAX 10000

int main(void)
{
        int N, X, arr[MAX] = { 0, };
        scanf("%d %d", &N, &X);
        
        for (int i=0; i<N; i++)
        {
                scanf("%d", &arr[i]);
        }
        
        for (int i=0; i<N; i++)
                if (arr[i] < X)
                        printf("%d ", arr[i]);
}