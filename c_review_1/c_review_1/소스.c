#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	if (a*a == b)
		printf("%d*%d=%d", a, a, b);
	else if (b*b == a)
		printf("%d*%d=%d", b, b, a);
	else
		printf("none");
}