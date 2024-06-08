#include <stdio.h>

int main(void)
{
        int N, n1, n2;
        scanf("%d", &N);
        
        while (N-- > 0)
        {
                scanf("%d %d", &n1, &n2);
                printf("%d\n", n1+n2);
        }
}