#include <stdio.h>
int main() {
	int a, b, c, d, e,max,min;
	scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
	max = a, min = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	if (max < e)
		max = e;

	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;
	if (min > e)
		min = e;

	printf("max: %d\nmin: %d\n", max, min);
	
}