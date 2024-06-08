#include <stdio.h>

int     main(void)
{
        int     N;
        int     cnt2;
        int     cnt5;
        
        cnt2 = 0;
        cnt5 = 0;
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
                int     temp2;
                int     temp5;
                int     opt2 = 1;
                int     opt5 = 1;
                
                temp2 = i;
                temp5 = i;
                while (opt2 == 1 || opt5 == 1)
                {
                        if (temp2 % 2 != 0 || temp2 == 0)
                                opt2 = 0;
                        if (opt2 == 1)
                                cnt2++;
                        if (temp5 % 5 != 0 || temp5 == 0)
                                opt5 = 0;
                        if (opt5 == 1)
                                cnt5++;
                        temp2 /= 2;
                        temp5 /= 5;
                }
        }
        if (cnt2 >= cnt5)
                printf("%d", cnt5);
        else
                printf("%d", cnt2);
}