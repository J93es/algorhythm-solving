#include <stdio.h>

int main()
{
    int L, n, arr[50], num1=0, num2=0, i=0, j=0, temp=0;
    
    scanf("%d", &L);
        
    for (i=0; i<L; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &n);
    
    for(i=0; i<L-1; i++)
    {
        for(j=0; j<L-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
        
    if (n>=arr[L-1])
    {
        for (i=0; i<L-1; i++)
        {
            if (arr[i]>n && n>arr[i+1])
            {
                num1 = arr[i]-n-1;
                num2 = n-arr[i+1]-1;
                break;
            }
        }
    }
    
    else
    {
        num1 = arr[L-1]-n-1;
        num2 = n-1;
    }
    
    
    printf("%d\n", num1+num2+num1*num2);
}