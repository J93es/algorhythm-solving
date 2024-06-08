#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000000


int comp(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	else
		return 0;
}


int main(void)
{
	int arr[MAX_LEN];
	int N;
	
	scanf("%d", &N);
	for (int i=0; i<N; i++)
		scanf("%d", &arr[i]);

	qsort(arr, N, sizeof(int), comp);

	for (int i=0; i<N; i++)
		printf("%d\n", arr[i]);
}