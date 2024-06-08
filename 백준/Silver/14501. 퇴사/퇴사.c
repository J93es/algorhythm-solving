#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;
int t[15], p[15];
int profit, max = 0;

// index -> next
// profit -> now
void consult(int index, int profit) {

	// printf("(%d, %d) ", index, profit);

	if (index > n) {
		// printf("\n");
		return;
	}
	if (profit > max)
		max = profit;

	if (index == n) {
		// printf("\n");
		return;
	}

	// choose O
	consult(index + t[index], profit + p[index]);
	// choose X
	consult(index + 1, profit);
    
}

int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &t[i], &p[i]);

	consult(0, 0);

	printf("%d", max);

	return 0;
    
}