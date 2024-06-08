
#include <stdio.h>

#define MAX_LEN 52


int T;
int cnt = 0;
int M, N, K;


int Erase(int arr[MAX_LEN][MAX_LEN], int x, int y)
{
        if (arr[x][y] == 1)
        {
                arr[x][y] = 0;
                
                if (arr[x+1][y] == 1)
                        Erase(arr, x+1, y);
                if (arr[x][y+1] == 1)
                        Erase(arr, x, y+1);
                if (arr[x-1][y] == 1)
                        Erase(arr, x-1, y);
                if (arr[x][y-1] == 1)
                        Erase(arr, x, y-1);
                return 1;
        }
        return 0;
}

int main(void)
{
        scanf("%d", &T);

        for (int t=0; t<T; t++)
        {
                int arr[MAX_LEN][MAX_LEN] = { 0 ,};
                
                scanf("%d %d %d", &M, &N, &K);

                for (int i=0; i<K; i++)
                {
                        int temp1, temp2;
                        scanf("%d %d", &temp1, &temp2);
                        arr[temp1+1][temp2+1] = 1;
                }
                
                for (int i=1; i<M+2; i++)
                {
                        for (int j=1; j<N+2; j++)
                                if (Erase(arr, i, j))
                                        cnt++;
                }
                
                printf("%d\n", cnt);
                cnt = 0;
        }
}