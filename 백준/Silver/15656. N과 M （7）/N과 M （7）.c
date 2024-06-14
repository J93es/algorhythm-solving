#include <stdio.h>
#include <stdlib.h>

int N, M;
int num[9] = { 0, };

int comp(const void *n1, const void *n2)
{
        int num1 = *(int *)n1;
        int num2 = *(int *)n2;
        
        if (num1 < num2)
                return -1;
        if (num1 > num2)
                return 1;
        return 0;
}

void BackTracking(int arr[], int pos, int cur)
{
        int i = 0;
        if (pos >= N)
                return;
        arr[pos] = cur;
        i = 0;
        if (pos == M - 1)
        {
                while (i < M)
                        printf("%d ", arr[i++]);
                printf("\n");
                return;
        }
        i = 0;
        while (i < N)
                BackTracking(arr, pos+1, num[i++]);
        return;
}


int main(void)
{
        int i = 0;
        int arr[9] = { 0, };
        scanf("%d %d", &N, &M);
        while (i < N)
                scanf("%d", &num[i++]);
        qsort(num, N, sizeof(int), comp);
        i = 0;
        while (i < N)
                BackTracking(arr, 0, num[i++]);
}