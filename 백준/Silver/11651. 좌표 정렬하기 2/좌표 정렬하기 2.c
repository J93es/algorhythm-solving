#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100000

typedef struct Pos
{
	int xpos;
	int ypos;
} Pos;


int comp(const void *n1, const void *n2)
{
	Pos point1 = *(Pos *)n1;
	Pos point2 = *(Pos *)n2;

	if (point1.ypos < point2.ypos)
		return -1;
	else if (point1.ypos > point2.ypos)
		return 1;
	else if (point1.xpos < point2.xpos)
		return -1;
	else if (point1.xpos > point2.xpos)
		return 1;
	return 0;
}

int main(void)
{
	Pos point[MAX_LEN];
	int N, i;
	scanf("%d", &N);

	for (i=0; i<N; i++)
		scanf("%d %d", &point[i].xpos, &point[i].ypos);

	qsort (point, N, sizeof(Pos), comp);

	for (i=0; i<N; i++)
		printf("%d %d\n", point[i].xpos, point[i].ypos);
	return 0;
}