#include <stdio.h>


int main(void)
{
        char c, temp = '\0';
        int cnt = 0, i = 0;

        while ( (c=getchar()) != '\n')
        {
                if (i != 0 && c == ' ')
                        cnt++;
                if (c != '\n')
                        temp = c;
                i++;
        }
        if (temp == ' ')
                cnt--;
        printf("%d", cnt+1);
}