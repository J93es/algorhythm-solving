#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000000

typedef struct pos
{
        long long num;
        int order;
} Pos;

int comp(const void *num1, const void *num2)
{
        Pos n1 = *(Pos *) num1;
        Pos n2 = *(Pos *) num2;
        
        if (n1.num < n2.num)
                return -1;
        else if (n1.num > n2.num)
                return 1;
        else
                return 0;
}

int main(void)
{
        int N, rank = 0;
        int* answer = (int*) malloc(sizeof(int) * MAX_LEN);
        Pos* arr = (Pos*) malloc(sizeof(Pos) * MAX_LEN);
        
        scanf("%d", &N);
        for (int i=0; i<N; i++)
        {
                scanf("%lld", &arr[i].num);
                arr[i].order = i;
        }
        
        qsort (arr, N, sizeof(Pos), comp);
        
        for (int i=0; i<N; i++)
        {
                int cnt = 0;
                while (i+cnt != N-1 && arr[i+cnt].num == arr[i+cnt+1].num)
                        cnt++;
                for (int j=i; j<=i+cnt; j++)
                        answer[arr[j].order] = rank;
                rank++;
                i += cnt;
        }
        for (int i=0; i<N; i++)
                printf("%d ", answer[i]);
       
}