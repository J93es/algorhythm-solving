#include <stdio.h>

int main(void)
{
	int i=0, answer = 0;;
	char str[101] = { 0, };

	while ( (str[i]=getchar()) != '\n' )
	{
		if (str[i] == '=')
		{
			if (str[i-2] == 'd' && str[i-1] == 'z')
				answer--;
			i++;
			continue;
		}
		else if (str[i] == '-')
		{
			i++;
			continue;
		}
		else if (str[i] == 'j' && (str[i-1] == 'l' || str[i-1] == 'n'))
		{
			i++;
			continue;
		}
		answer++;
		i++;
	}
	printf("%d", answer);
}