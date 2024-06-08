#include <stdio.h>


long long MaxDiv(long long n1, long long n2)
{
	long long answer = (n1>n2) ? n2 : n1;
	while (n1 % answer != 0 || n2 % answer != 0)
		answer--;
	return answer;
}


long long MinMul(long long n1, long long n2)
{
	long long answer = (n1>n2) ? n1 : n2;
	while (answer % n1 != 0 || answer %n2 != 0)
		answer++;
	return answer;
}


int main(void)
{
	long long n1, n2;
	scanf("%lld %lld", &n1, &n2);
	printf("%lld\n%lld", MaxDiv(n1, n2), MinMul(n1, n2));
}