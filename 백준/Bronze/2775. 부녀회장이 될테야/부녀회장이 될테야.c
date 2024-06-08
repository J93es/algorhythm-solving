#include <stdio.h>

int main(void)
{
    int arr[15][15] = { 0, };
    int T, k, n;
    scanf("%d", &T);
    
    for (int i=0; i<T; i++)
    {
        scanf("%d %d", &k, &n);
        
        for (int j=1; j<n+1; j++)
            arr[0][j] = j;
        
        for (int j=1; j<k+1; j++)
            for (int r=1; r<n+1; r++)
                arr[j][r] = arr[j][r-1] + arr[j-1][r];
    
        printf("%d\n", arr[k][n]);
    }

}