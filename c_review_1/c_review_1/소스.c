#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	(a > b && b > c) || (c > b && b > a) ? printf("%d", b) : (a > c && c > b) || (b > c && c > a) ? printf("%d", c) : printf("%d", a);
}