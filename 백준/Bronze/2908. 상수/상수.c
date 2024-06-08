#include <stdio.h>


int main(void)
{
	int n1, n2, temp, i, j, jud = 0, answer = 0;
	scanf("%d %d", &n1, &n2);

	for (i=10; i<1001; i*=10)
	{
		int temp1 = (n1 % i) / (i/10);
		int temp2 = (n2 % i) / (i/10);
		
		if (temp1 != temp2)
		{
			jud = (temp1>temp2) ? 1 : 2;
			break;
		}
	}

	temp = n1;
	if (jud == 2)
		temp = n2;
	
	j = 100;
	for (i=10; i<1001; i*=10)
	{
		int temp1 = (temp % i) / (i/10);
		answer += temp1 * j;
		j /= 10;
	}
	
	printf("%d", answer);
}	