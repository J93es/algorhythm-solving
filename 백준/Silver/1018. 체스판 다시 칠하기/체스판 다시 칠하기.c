#include <stdio.h>

int main()
{
    int n=0, m=0, cnt=100, temp0=0, temp1=0;
    int N, M;
    scanf("%d %d", &N, &M);
    
    char str[M+1];
    int arr0[8][8], arr1[8][8];
    int arr[N][M];
    
    //  arr 입력받음 (w=0, b=1로 치환)
    for (int i=0; i<N; i++)
    {
        scanf("%s", str);   //  1행씩 입력받음
        
        for (int j=0; j<M; j++)
        {
            if ( str[j] == 'W' )
                arr[i][j] = 0;
            else if ( str[j] == 'B' )
                arr[i][j] = 1;
        }
    }
    
    //  대조할 체스판 형성
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            if ( (i%2 == 0 && j%2 == 0) || (i%2 == 1 && j%2 == 1) )
            {
                arr0[i][j] = 0;
                arr1[i][j] = 1;
            }
            else
            {
                arr0[i][j] = 1;
                arr1[i][j] = 0;
            }
        }
    }
    
    while ( n+7 < N )
    {
        m = 0;
        while ( m+7 < M )
        {
            temp0 = 0;
            temp1 = 0;
            
            for (int i=0; i<8; i++)
            {
                for (int j=0; j<8; j++)
                {
                    if ( arr[n+i][m+j] != arr0[i][j] )
                        temp0++;
                    if ( arr[n+i][m+j] != arr1[i][j] )
                        temp1++;
                }
            }
            if ( cnt > temp0 )
                cnt = temp0;
            if ( cnt > temp1 )
                cnt = temp1;
            m++;
        }
        n++;
    }
    printf("%d", cnt);
}