#include <stdio.h>

int main(void)
{
        int i = 0;
        char N[333335];
        int arr[] = { 0, 1,10,11,100,101,110,111 };
        scanf("%s", N);
        
        printf("%d", arr[N[i++] - '0']);
        while (N[i] != '\0')
                printf("%03d", arr[N[i++] - '0']);
}