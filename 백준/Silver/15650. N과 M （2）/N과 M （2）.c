#include <stdio.h>

int N, M;


void BackTracking(int arr[], int pos, int cur)
{
        int i = 0;
        if (cur > N || cur < 1)
                return;
        while (i < pos)
                if (arr[i++] == cur)
                        return;
        arr[i] = cur;
        i = 0;
        if (pos == M - 1)
        {
                while (i < M)
                        printf("%d ", arr[i++]);
                printf("\n");
                return;
        }
        i = cur;
        while (i < N+1)
                BackTracking(arr, pos+1, ++i);
        return;
}


int main(void)
{
        int i = 1;
        int arr[9] = { 0, };
        scanf("%d %d", &N, &M);
        while (i < N+1)
                BackTracking(arr, 0, i++);
}