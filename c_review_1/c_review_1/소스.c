#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n,cnt1=0, cnt2=0,i;
	char *a,ch1,ch2;
	scanf("%d", &n);
	getchar();
	a = (char*)malloc((n+1) * sizeof(char));
	scanf("%s", a);
	
	getchar();
	scanf("%c", &ch1);
	getchar();
	scanf("%c", &ch2);

	for (i = 0; i < n; i++) {
		if (ch1 == a[i])
			cnt1++;
		if (ch2 == a[i])
			cnt2++;
	}
	printf("%d %d", cnt1, cnt2);

	free(a);
	return 0;
}