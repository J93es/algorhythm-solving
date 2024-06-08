#include <stdio.h>


void Bsort(long arr[])
{
    for (int i=0; i<2; i++)
        for (int j=0; j<2-i; j++)
            if (arr[j] > arr[j+1])
            {
                long temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}


int main(void)
{
    long arr[3];
    
    while (1)
    {
        for (int i=0; i<3; i++)
            scanf("%ld", &arr[i]);
        
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;
        
        Bsort(arr);
    
        if (arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2])
            printf("right\n");
        else
            printf("wrong\n");
    }
}