#include <stdio.h>
#include <string.h>
int main() {
	int n, i,cnt,flg=0;
	char a[80], b[10], *pa,*pb;
	scanf("%s", a);
	scanf("%s", b);
	for (pa = a; pa < a + strlen(a); pa++) {
		cnt = 0;
		if (*pa == b[0]) {
			for (pb = b, i = 0; pb < b + strlen(b); pb++, i++) {
				if (*(pa + i) == *pb)
					cnt++;
				if (cnt == strlen(b)) {
					flg = 1;
					break;
				}
			}
		}
	}
	printf("%d %d",strlen(a),flg);
}
