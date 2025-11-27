#include <stdio.h>
int main()
{
	int L, B, area;
	printf ("enter the length and breadth:");
	scanf("%d %d", &L, &B);
	area = L * B;
	printf("Area of rectangle is %d\n", area);
	return 0;
}
