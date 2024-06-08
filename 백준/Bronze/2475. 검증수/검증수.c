#include <stdio.h>

int main()
{
    int n1=0, n2=0, n3=0, n4=0, n5=0, certi=0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    certi = (n1*n1 + n2*n2 + n3*n3 + n4*n4 + n5*n5)%10;
    printf("%d\n", certi);
}