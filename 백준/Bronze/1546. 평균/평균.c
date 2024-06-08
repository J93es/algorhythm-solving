#include <stdio.h>

#define MAX_LEN 1000


int main(void)
{
	double N, M = 0, sum = 0, arr[MAX_LEN];
	scanf("%lf", &N);

	for (int i=0; i<N; i++)
	{
		scanf("%lf", &arr[i]);
		if (M < arr[i])
			M = arr[i];
	}
	
	for (int i=0; i<N; i++)
		sum += arr[i]/M * 100;

	printf("%f", sum/N);
}