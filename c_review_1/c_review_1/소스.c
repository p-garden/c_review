#include <stdio.h>
#include <string.h>
int main() {
	int n, i, j,b_len=0;
	char a[100], b[10][100],*pa,tmp[100];
	gets(a);
	for (pa = a,j=0; pa < a + 100; pa++,j++) {
		if (*pa == '\0') {
			tmp[j] = '\0';
			strcpy(b[b_len], tmp);
			b_len++;
			break;
		}
		if (*pa == ' ') {
			tmp[j] = '\0';
			strcpy(b[b_len],tmp);
			j = -1;
			b_len++;
			continue;
		}
		tmp[j] = *pa;
	}
	for (i = 0; i < b_len; i++)
		printf("%s\n", b[i]);
	strcpy(tmp, b[0]);
	for (i = 0; i < b_len; i++) {
		if (strcmp(tmp, b[i]) > 0)
			strcpy(tmp, b[i]);
	}
	printf("%s", tmp);
}