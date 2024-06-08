
#include <stdio.h>

int cnt = 0;
int N, R, C;
int N2 = 1;


int Div(int x, int y, int r, int c)
{
        if (x==2 && y==2)
        {
                if (r==0 && c==1)
                        cnt += 1;
                else if (r==1 && c==0)
                        cnt += 2;
                else if (r==1 && c==1)
                        cnt += 3;
                return 1;
        }
        else if (r < x/2)
        {
                if (c < y/2)                            //2Q
                        Div(x/2, y/2, r, c);
                else                                    //1Q
                {
                        cnt += (x/2) * (y/2);
                        Div(x/2, y/2, r, c - y/2);
                }
        }
        else
        {
                if (c < y/2)                            //3Q
                {
                        cnt += 2 * (x/2) * (y/2);
                        Div(x/2, y/2, r - x/2, c);
                }
                else                                    //4Q
                {
                        cnt += 3 * (x/2) * (y/2);
                        Div(x/2, y/2, r - x/2, c - y/2);
                }
        }
        return 1;
}

int main(void)
{
        scanf("%d %d %d", &N, &R, &C);
        for (int i=0; i<N; i++)
                N2 *= 2;
        Div (N2, N2, R, C);
        
        printf("%d\n", cnt);
}