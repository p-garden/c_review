#include <stdio.h>
int main() {
	int a,g,even=0,odd=0,tmp;
	scanf("%d", &a);
	while (a) {
		tmp = a % 10;
		if (tmp % 2 == 0) {
			even *= 10;
			even += tmp;
		}
		else {
			odd *= 10;
			odd += tmp;
		}
		a /= 10;
	}
	printf("%d %d", even,odd);
}