#include <stdio.h>

int main(void)
{
    int arr[9], i, r, max=0;
    
    for (i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);
        if (max<arr[i])
        {
            max = arr[i];
            r = i+1;
        }
    }
    printf("%d\n%d", max, r);
}