#include <stdio.h>

int FindDigits(int num)
{
    int temp = num;
    int digits = 0;
    
    while (temp>0)
    {
        temp /= 10;
        digits++;
    }
    
    return digits;
}

int Judge(int num, int head, int tail)
{
    int headNum = num, tailNum = num, temp = 1;
    
    for (int i=0; i<head; i++)
        temp *= 10;
    headNum = (num % temp) / (temp/10);
    temp = 1;
    
    for (int i=0; i<tail; i++)
        temp *= 10;
    tailNum = (num % temp) / (temp/10);
    
    if (headNum == tailNum)
        return -1;
    else
        return 0;
}


int main()
{
    int num, digits=0, judge=-1;
    
    while (1)
    {
        scanf("%d", &num);
        if (num==0)
            break;
        else if (num/10 == 0)
            printf("yes\n");
        else
        {
            digits = FindDigits(num);

            for (int i=1; i<digits/2+1; i++)
            {
                judge = Judge(num, i, digits-i+1);
                
                if (judge==0)
                    break;
                else if (i==digits/2)
                    judge = 1;
            }
            if (judge == 0)
                printf("no\n");
            else if (judge == 1)
                printf("yes\n");
        }
    }
}