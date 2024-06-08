#include <stdio.h>


int JudPrime(int n)
{
        int jud = 1;
        if (n == 1)
                jud = 0;
        else if (n == 2)
                jud = 1;
        else if (n%2 == 0)
                jud = 0;
        else
        {
                for (int i=3; i<=n/3; i+=2)
                        if (n % i == 0)
                        {
                                jud = 0;
                                break;
                        }
        }
        return jud;
}


int main(void)
{
        int N, cnt = 0;;
        scanf("%d", &N);
        for (int i=0; i<N; i++)
        {
                int num;
                scanf("%d", &num);
                if (JudPrime(num))
                        cnt++;
        }
        printf("%d", cnt);
}