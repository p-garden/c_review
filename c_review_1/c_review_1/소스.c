#include <stdio.h>
int main() {
	int a,b,sum=0,cnt=0,tmp,i;

	scanf("%d%d", &a, &b);

	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	for (i = a; i <= b; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
			sum += i;
			cnt++;
		}
	}
	printf("cnt=%d sum=%d\n", cnt,sum);
	cnt = 0, sum = 0;
	
	for (i = a; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
			sum += i;
			cnt++;
		}
	}
	printf("cnt=%d sum=%d\n", cnt, sum);
}