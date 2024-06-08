#include <stdio.h>

#define MAX 43

int main(void)
{
        int arr[MAX] = { 0, };
        int N, cnt = 0;
        
        for (int i=0; i<10; i++)
        {
                scanf("%d", &N);
                arr[N%42]++;
        }
        
        for (int i=0; i<42; i++)
                if (arr[i] != 0)
                        cnt++;
        printf("%d", cnt);
}