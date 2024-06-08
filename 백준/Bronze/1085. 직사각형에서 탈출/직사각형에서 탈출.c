#include <stdio.h>

int main(void)
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int arr[4] = { x, y, w-x, h-y };
    
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d", arr[0]);
}