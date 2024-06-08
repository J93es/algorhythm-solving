#include <stdio.h>


int main(void)
{
        int arr[10] = { 0, };
        int A, B, C, multi = 10;
        long long Num;
        scanf("%d %d %d", &A, &B, &C);
        
        Num = A * B * C;
        while (Num > 0)
        {
                int n = (Num % multi) / (multi/10);
                arr[n]++;
                Num /= 10;
        }
        for (int i=0; i<10; i++)
                printf("%d\n", arr[i]);
}