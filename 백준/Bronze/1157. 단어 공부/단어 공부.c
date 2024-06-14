#include <stdio.h>

#define MAX_LEN 200


int main(void)
{
	char c;
	int max = 0, jud = -1; 
	int arr[MAX_LEN] = { 0, };
	
	while ( (c=getchar()) != '\n')
	{
		if (c >'a'-1 && c<'z'+1)
			c = c - 'a' + 'A';
		arr[c]++;
	}
	
	for (int i=0; i<MAX_LEN; i++)
	{
		if (arr[i] != 0)
		{
			if (max < arr[i])
			{
				jud = i;
				max = arr[i];
			}
			else if (max == arr[i])
				jud = -1;
		}
	}
	if (jud != -1)
		printf("%c\n", jud);
	else
		printf("?");
}