#include <stdio.h>
int main() {
	int a,b,cnt,cnt2=0,tmp,i,j;

	scanf("%d%d", &a, &b);

	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	
	for (i = a; i <= b; i++) {
		cnt = 0;
		for (j = 1; j <= i; j++) {
			if (i%j == 0)
				cnt++;
		}
		if (cnt%2 ==0)
			cnt2++;
	}
	printf("%d", cnt2);
}