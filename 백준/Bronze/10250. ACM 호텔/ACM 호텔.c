#include <stdio.h>

int main(void)
{
    int T, H, W, N;
    scanf("%d", &T);
    for (int cnt=0; cnt<T; cnt++)
    {
        scanf("%d %d %d", &H, &W, &N);
        if (N%H != 0)
            printf( "%d\n", (N % H)*100 + N / H + 1 );
        else
            printf( "%d\n", H*100 + N/H );
    }
}