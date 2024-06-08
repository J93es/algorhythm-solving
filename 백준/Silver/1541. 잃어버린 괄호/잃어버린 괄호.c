#include <stdio.h>


int FindNum(char str[], int *i)
{
        int temp = *i, cnt = 0, num = 1, answer = 0;
        while (str[temp] <= '9' && str[temp] >= '0')
        {
                cnt++;
                temp++;
        }
        temp = *i;
        *i += cnt;
        
        for (int i=0; i<cnt; i++)
                num *= 10;
        
        while (num/=10)
                answer += num * (str[temp++] - '0');
        
        return answer;
}


int main(void)
{
        int i = 0, answer = 0;
        char str[51] = { 0, };
        scanf("%s", str);
        
        while (str[i])
        {
                if (str[i] <= '9' && str[i] >= '0')
                        answer += FindNum(str, &i);
                if (str[i] == '-')
                {
                        i++;
                        while (str[i] != '-' && str[i] != '\0')
                        {
                                answer -= FindNum(str, &i);
                                i++;
                        }
                        i--;
                }
                else if (str[i] == '+')
                {
                        i++;
                        answer += FindNum(str, &i);
                }
                else
                        break;
        }
        printf("%d", answer);
}