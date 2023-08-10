#include <stdio.h>
int main() {
	double n, m;
	printf("가로: ");
	scanf("%lf", &n);
	printf("세로: ");
	scanf("%lf", &m);
	printf("넓이->%.2lf\n",n*m);
}