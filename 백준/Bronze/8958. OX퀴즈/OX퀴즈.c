#include <stdio.h>


int main()
{
    int n;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        int num=0, score=0;
        char str[82];
        
        scanf("%s", str);
        
        for (int j=0; j<82; j++)
        {
            if (str[j]=='O')
            {
                num++;
                score += num;
            }
            else if (str[j]=='X')
                num = 0;
            else
                break;
        }
        printf("%d\n", score);
        score = num = 0;
    }
}