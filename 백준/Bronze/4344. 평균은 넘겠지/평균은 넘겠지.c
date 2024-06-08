#include <stdio.h>


int main(void)
{
    int case_, N;
    int arrscore[1000] = {0, };
    float up=0, total=0;
    
    scanf("%d", &case_);
    
    for(int i=0; i<case_; i++)
    {
        scanf("%d", &N);
        
        for (int r=0; r<N; r++)
        {
            scanf("%d", &arrscore[r]);
            total += arrscore[r];
        }
        
        total = total/N;
        
        for (int j=0; j<N; j++)
        {
            if (arrscore[j]>total)
                up += 1;
        }
        
        printf("%.3f%%\n", up*100/N);
        up = 0.0;
        total = 0.0;
    }
}