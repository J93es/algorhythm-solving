#include <stdio.h>

int main(void)
{
    int num1, num2 = 0;
    
    scanf("%d %d",&num1, &num2);
    
    
    if (num1 > 0){
        num1 = num1 - 1;
        
        if (num2 < 45){
            num2 = num2 + 15;
        }
        else{
            num2 = num2 - 45;
            num1 = num1 +1;
        }
    }
    
    
    else{
        if (num2 < 45){
            num2 = num2 + 15;
            num1 = 23;
        }
        else{
            num2 = num2 - 45;
            num1 = 0;
        }
    }
    printf("%d %d\n", num1, num2);
}