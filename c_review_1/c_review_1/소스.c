#include <stdio.h>
int main() {
	int ar[50] = { 0 }, n,i,cnt=0;
	int *p;

	scanf("%d", &n);
	for (p = ar; p < ar + n;p++) {
		scanf("%d", p);
		if (*p == 0)
			break;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}