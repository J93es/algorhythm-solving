#include <stdio.h>

#define LEN 21

void    ft_add(int arr[LEN], int n)
{
        arr[n] = 1;
}

void    ft_remove(int arr[LEN], int n)
{
        arr[n] = 0;
}

void    ft_check(int arr[LEN], int n)
{
        if (arr[n] == 0)
                printf("0\n");
        else
                printf("1\n");
}

void    ft_toggle(int arr[LEN], int n)
{
        if (arr[n] == 0)
                arr[n] = 1;
        else
                arr[n] = 0;
}

void    ft_all(int arr[LEN])
{
        for (int i = 0; i < LEN; i++)
                arr[i] = 1;
}

void   ft_empty(int arr[LEN])
{
        for (int i = 0; i < LEN; i++)
                arr[i] = 0;
}

void    tasking(int arr[LEN])
{
        int     n;
        char    str[10];
        
        scanf("%s", str);
        if (str[0] == 'a' && str[1] == 'd')
        {
                scanf("%d", &n);
                ft_add(arr, n);
        }
        else if (str[0] == 'r')
        {
                scanf("%d", &n);
                ft_remove(arr, n);
        }
        else if (str[0] == 'c')
        {
                scanf("%d", &n);
                ft_check(arr, n);
        }
        else if (str[0] == 't')
        {
                scanf("%d", &n);
                ft_toggle(arr, n);
        }
        else if (str[0] == 'a' && str[1] == 'l')
        {
                ft_all(arr);
        }
        else if (str[0] == 'e')
        {
                ft_empty(arr);
        }
}

int     main(void)
{
        int     M;
        int     arr[LEN];
        
        scanf("%d", &M);
        for (int i = 0; i < LEN; i++)
                arr[i] = 0;
        for (int i = 0; i < M; i++)
                tasking(arr);
        return (0);
}