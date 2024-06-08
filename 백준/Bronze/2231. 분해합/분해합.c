#include <stdio.h>

long FindNum(int cnt, long num)
{
    long n = 0;
    
    if ( cnt > 0 )
        n = num % 10 + FindNum(cnt-1, num/10);
    else if ( cnt ==  0)
        n = 0;
    
    return n;
}

int main(void)
{
    long N, num;
    scanf("%ld", &N);
    int cnt, tru=0;
    
    for (long i=1; i<N+1; i++)
    {
        long temp = N;
        cnt = 0;
        
        while( temp != 0 )  //  자리수 찾기
        {
            temp /= 10;
            cnt++;
        }
        
        num = i + FindNum ( cnt, i );
        if ( num == N )
        {
            printf("%ld", i);
            tru = 1;
            break;
        }
    }
    if (tru != 1)
        printf("0");
}