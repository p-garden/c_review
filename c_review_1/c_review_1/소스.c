#include <stdio.h>
#include <string.h>
int check(char*);
int main() {
	char a[30];
	scanf("%s", a);
	printf("%d %d", strlen(a), check(a));
}
int check(char *a) {
	int len,i,j,flg=1;
	len = strlen(a);
	for (i = 0, j = len - 1; i < len; i++, j--) {
		if (a[i] != a[j])
			flg = 0;
	}
	return flg;
}