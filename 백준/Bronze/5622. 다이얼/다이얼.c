#include <stdio.h>

int main(void)
{
	char str[16] = { 0, };
	int i=0, answer = 0;

	while ( (str[i++]=getchar()) != '\n' )
		;
	i = 0;

	while (str[i] != '\n')
	{
		int temp = str[i] - 'S';
		answer += (str[i++] - 'A') / 3 + 3;
		if (temp % 3 == 0 && temp >= 0)
			answer--;
		if (str[i-1] == 'Z')
			answer--;
	}
	printf("%d", answer);
}