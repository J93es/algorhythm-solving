#include <stdio.h>


int main()
{
    int num, sum=0;
    scanf("%d", &num);
    
    char str[num+1];
    scanf("%s", str);
    
    for (int i=0; i<num; i++)
        sum += str[i] - '0';
    
    printf("%d\n", sum);
}