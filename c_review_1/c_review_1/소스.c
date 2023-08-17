#include <stdio.h>
int main() {
	int n,i,j,cnt1,cnt2;
	scanf("%d", &n);
	while (n > 0) {
		cnt1 = 0;
		for (i = 1; i <= n; i++) {
			if (n%i == 0)
				cnt1++;
		}
		if (cnt1 == 2) {
			printf("%d", n);
			for (i = n + 1; ; i++) {
				cnt2 = 0;
				for (j = 1; j <= i; j++) {
					if (i%j == 0)
						cnt2++;
				}
				if (cnt2 == 2) {
					printf(" %d\n", i);
						break;
				}
			}
		}
		scanf("%d", &n);
	}

}