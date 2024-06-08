#include <stdio.h>

int main(){
    
    long long t, i=0, j, k=0, r=1, l=1, num1, num2;
    scanf("%lld", &t);
    
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld", &num1, &num2);
        
        if (num2/2<num1)
            num1 = num2-num1;
            
        for(j=0; j<num1; j++)
        {
            r *= (num2-k);
            k++;
        }
        for(j=num1; j>0; j--)
            l *= j;
        
        printf("%lld\n", r/l);
        r=1;
        l=1;
        k=0;
    }
    return 0;
}