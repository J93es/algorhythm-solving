#include <stdio.h>


int main()
{
    int arr[8], n1=0, n2=0;

    for (int i=0; i<8; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    for (int i=0; i<7; i++)
    {
         if (arr[0]==1 && arr[i]+1==arr[i+1])
             n1++;
        else if (arr[0]==8 && arr[i]-1==arr[i+1])
            n2++;
    }
    if (n1==7)
        printf("ascending\n");
    else if (n2==7)
        printf("descending\n");
    else
        printf("mixed\n");
    
}
