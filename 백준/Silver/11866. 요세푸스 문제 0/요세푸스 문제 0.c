#include <stdio.h>

#define MAX_LEN 1001


int main(void)
{
        int N, K, n, k, cnt = 0;
        int man[MAX_LEN] = { 0, }, answer[MAX_LEN];
        scanf("%d %d", &N, &K);
        
        for (int i=0; i<N; i++)
                man[i] = i+1;
        
        k = K - 1;
        n = N - 1;
        while (n >= 0)
        {
                while (k > n)
                        k -= n + 1;
                
                answer[cnt++] = man[k];

                for(int i=k; i<n; i++)
                        man[i] = man[i+1];
                n--;
                k += K - 1;
        }
        printf("<");
        for (int i=0; i<N-1; i++)
                printf("%d, ", answer[i]);
        printf("%d>", answer[N-1]);
}