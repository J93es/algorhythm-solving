#include <stdio.h>

int main(void)
{
        int     arr[10001];
        int     cur_num;
        int     unself_num;
        
        for (int i = 0; i < 10001; i++)
                arr[i] = 0;
        for (int i = 0; i < 10001; i++)
        {
                cur_num = i;
                unself_num = cur_num;
                while (cur_num > 0)
                {
                        unself_num += cur_num % 10;
                        cur_num /= 10;
                }
                if (unself_num < 10001)
                        arr[unself_num] = 1;
        }
        for (int i = 0; i < 10001; i++)
                if (arr[i] == 0)
                        printf("%d\n", i);
}