#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_N 20000
#define MAX_LEN 51
int compare(const void *a, const void *b){
        char *s1 = (char *)a;
        char *s2 = (char *)b;
        
        if (strlen(s1) == strlen(s2))
                return strcmp(s1,s2);
        else if (strlen(s1) < strlen(s2))
                return -1;
        else
                return 1;
}

int main()
{
        int N, i = 0;
        char arr[MAX_N][MAX_LEN];

        
        scanf("%d",&N);
        for(int i=0; i<N; i++)
                scanf("%s",arr[i]);
        
        qsort(arr, N, sizeof(arr[0]), compare);
        
        for (i=0; i<N-1; i++)
                if (strcmp(arr[i], arr[i+1]) == 0)
                        arr[i][0] = 0;
                
        for(i=0; i<N; i++)
                if (arr[i][0] != 0)
                        printf("%s\n", arr[i]);
}