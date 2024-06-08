#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        
        int R;
        scanf("%d", &R);
        
        char str[21];
        scanf("%s", str);
    
        for(int r=0; r<strlen(str); r++)
        {
            for(int j=0; j<R; j++)
                printf("%c", str[r]);
        }
        printf("\n");
    }
}