#include <stdio.h>

#define MAX_LEN 100


typedef struct person
{
        int num;
        int height;
        int tall;
} Person;


int main(void)
{
        int N, arr[MAX_LEN] = { 0, };
        Person man[MAX_LEN];
        scanf("%d", &N);
        
        for (int i=0; i<N; i++)
        {
                scanf("%d %d", &man[i].height, &man[i].tall);
                man[i].num = i;
        }
        
        for (int i=0; i<N; i++)
        {
                int cnt = 0;
                for (int j=0; j<N; j++)
                {
                        if ( man[i].height < man[j].height && man[i].tall < man[j].tall )
                                cnt++;
                }
                arr[man[i].num] = cnt + 1;
        }

        for (int i=0; i<N; i++)
                printf("%d\n", arr[i]);
}