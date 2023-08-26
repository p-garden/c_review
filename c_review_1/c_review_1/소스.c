#include <stdio.h>
int main() {
	int n,sum=0,cur=0;
	char chr[100],prt_chr[100];
	char *pchr;
	scanf("%d", &n);
	getchar();
	for (pchr = chr; pchr < chr + n; pchr++)
		scanf("%c", pchr);
	for (pchr = chr; pchr < chr + n; pchr++) {
		if ('0' <= *pchr&&*pchr <= '9') {
			cur += *pchr - '0';
			if ('0' <= *(pchr + 1) && *(pchr + 1) <= '9')
				cur *= 10;
			else {
				sum += cur;
				cur = 0;
			}
		}
		else {
			printf("%c", *pchr);
		}
	}
	printf("\n%d", sum);
	return 0;
}