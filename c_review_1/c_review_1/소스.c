#include <stdio.h>
int main() {
	int a,i,j,cnt=0,tmp;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		tmp = i;
		while (tmp) {
			if (tmp % 10 == 3)
				cnt++;
			tmp /= 10;
		}
	}
	printf("%d", cnt);
}