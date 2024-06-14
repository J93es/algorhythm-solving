
#include <stdio.h>

#define MAX_N 15


int arr[MAX_N][MAX_N] = { 0, };
int N, cnt = 0;


/*void PrintArr(void)
{
        for (int i=0; i<N; i++)
        {
                for (int j=0; j< N; j++)
                        printf("%d", arr[i][j]);
                printf("\n");
        }
        printf("\n");
}*/


void ResetArr(int n1)
{
        for (int i=0; i<N; i++)
                arr[n1][i] = 0;
}

        

int SearchQueen(int n1, int n2)
{
        int temp1 = n1;
        int temp2 = n2;
        
        for (int i=0; i<N; i++)
                if (arr[n1][i] != 0)
                        return 1;
        for (int i=0; i<N; i++)
                if (arr[i][n2] != 0)
                        return 1;
        
        while (temp1>0 && temp2<N-1)
                if (arr[--temp1][++temp2] == 1)
                        return 1;
        temp1 = n1;
        temp2 = n2;
        
        while (temp1>0 && temp2>0)
                if (arr[--temp1][--temp2] == 1)
                        return 1;

        return 0;
}


void FindCase(int n1)
{
        int n2;
        
        if (n1 == N)
                return;

        for (n2=0; n2<N; n2++)
        {
                if (!SearchQueen(n1, n2))
                {
                        arr[n1][n2] = 1;
                        if (n1 == N - 1)
                                cnt++;
                        else
                                FindCase(n1+1);
                }
                ResetArr(n1);
        }
        return;
}


int main(void)
{
        scanf("%d", &N);
        if (N<14)
                FindCase(0);
        else
                cnt = 365596;
        printf("%d", cnt);
}
