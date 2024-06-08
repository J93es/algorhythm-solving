#include <stdio.h>

#define MAX 101

int main(void)
{
        char S[MAX];
        int arr[26] = { 0, };
        int answer[26] = { 0, };
        int i = 0;
        
        scanf("%s", S);
        
        while (S[i] != '\0')
        {
                int temp = S[i++] - 'a';
                if (arr[temp]++ == 0)
                        answer[temp] = i;
        }
        
        for (i=0; i<26; i++)
                printf("%d ", answer[i]-1);
}