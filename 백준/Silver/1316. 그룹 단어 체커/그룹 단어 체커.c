#include <stdio.h>


int JudStr(char str[])
{
	int i = 0; 
	int arr[150] = { 0, };
	char c;
	
	while (str[i])
	{
		if (arr[str[i]] != 0)
			return 0;

		c = str[i];
		arr[str[i]]++;
		while (str[++i] == c)
			;
	}
	return 1;
}

int main(void)
{
	int N, answer = 0;
	char str[101];
	scanf("%d", &N);

	for (int i=0; i<N; i++)
	{
		scanf("%s", str);
		if(JudStr(str))
			answer++;
	}
	printf("%d", answer);
}