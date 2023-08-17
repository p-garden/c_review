#include <stdio.h>
int main() {
	int n,i,pri,a,b;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &pri, &a, &b);
		if (pri - a < 0 || pri - b < 0) {
			if (pri - a < 0 && pri - b < 0)
				printf("draw\n");
			else if (pri - a < 0)
				printf("B\n");
			else
				printf("A\n");
		}
		else if (pri - a < pri - b)
			printf("A\n");
		else if (pri - a > pri - b)
			printf("B\n");
		else
			printf("draw\n");
	}
}