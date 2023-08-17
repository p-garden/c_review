#include <stdio.h>
int main() {
	int a,tmp1,tmp2;
	scanf("%d", &a);
	tmp1 = a;
	while (tmp1) {
		tmp2 = tmp1 % 10;
		a *= 10;
		a += tmp2;
		tmp1 /= 10;
	}
	printf("%d\n%d", a,a%131);
}