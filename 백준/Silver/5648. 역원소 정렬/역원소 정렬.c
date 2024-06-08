#include <stdio.h>
#include <stdlib.h>

long long       ft_reverse(char str[13])
{
        int             i;
        int             len;
        long long       result;
        
        i = 0;
        len = 1;
        result = 0;
        while (str[len] != '\0')
                len++;
        while (i < len / 2)
        {
                char    temp;
        
                temp = str[i];
                str[i] = str[len - 1 - i];
                str[len - 1 - i] = temp;
                i++;
        }
        i = 0;
        while ('0' <= str[i] && str[i] <= '9')
                result = result * 10 + (str[i++] - '0');
        return (result);
}

int     comp(const void *a, const void *b)
{
        long long       num1;
        long long       num2;
        
        num1 = *(long long *)a;
        num2 = *(long long *)b;
        if (num1 < num2)
                return (-1);
        else if (num1 > num2)
                return (1);
        else
                return (0);
}

int     main(void)
{
        int             n;
        long long       *arr;
        long long       temp;
        
        scanf("%d", &n);
        temp = 0;
        arr = (long long *)malloc(sizeof(long long) * n);
        if (arr ==0)
                return (-1);
        while (temp < n)
        {
                char    str[13];
                int     i;
                
                i = 0;
                while (i < 13)
                        str[i++] = '\0';
                scanf("%s", str);
                arr[temp++] = ft_reverse(str);
        }
        qsort (arr, n, sizeof(long long), comp);
        temp = 0;
        while (temp < n)
                printf("%lld\n", arr[temp++]);
	free (arr);
        return (0);
}