#include <stdio.h>

int main(void)
{
    int numA, numB, numC, numD;
    scanf("%d %d %d %d", &numA, &numB, &numC, &numD);
    printf("%d \n%d \n", (numA+numB)%numC, ((numA%numC) + (numB%numC))%numC);
    printf("%d \n%d", (numA*numB)%numC, ((numA%numC) * (numB%numC))%numC);
}