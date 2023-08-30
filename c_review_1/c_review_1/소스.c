#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, i, min=101;
	char **a, tmp[100],ch_min[100];
	scanf("%d", &n);
	getchar();
	a = (char**)malloc(n * sizeof(char*));
	for (i = 0; i < n; i++) {
		gets(tmp);
		a[i] = (char*)malloc((strlen(tmp) + 1) * sizeof(char));
		strcpy(a[i], tmp);
		if (min > strlen(a[i])) {
			min = strlen(a[i]);
			strcpy(ch_min, a[i]);
		}
	}
	printf("%s", ch_min);
	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);
	return 0;
}