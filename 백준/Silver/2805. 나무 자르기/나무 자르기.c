#include <stdio.h>
#include <stdlib.h>

int     comp(const void *a, const void *b)
{
        int     num1 = *(int *)a;
        int     num2 = *(int *)b;
        
        if (num1 > num2)
                return (-1);
        if (num1 < num2)
                return (1);
        return (0);
}

int     main(void)
{
        int     *arr;
        int     cnt;
        int     len;
        int     sum = 0;
        int     height;
        
        scanf("%d %d", &cnt, &len);
        arr = (int *)malloc(sizeof(int) * cnt);
        if (arr == 0)
                return (-1);
        for (int i = 0; i < cnt; i++)
                scanf("%d", &arr[i]);
        qsort(arr, cnt, sizeof(int), comp);
        height = arr[0];
        for (int i = 0; i < cnt - 1; i++)
        {
                while (arr[i] > arr[i + 1])
                {
                        arr[i]--;
                        sum += i + 1;
                        height--;
                        if (sum >= len)
                        {
                                printf("%d", height);
                                return (0);
                        }
                }
        }
        while (arr[cnt - 1] > 0)
        {
                arr[cnt - 1]--;
                sum += cnt;
                height--;
                if (sum >= len)
                {
                        printf("%d", height);
                        return (0);
                }
        }
        return (1);
}