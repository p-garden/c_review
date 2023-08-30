#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, i,j;
	char **a=NULL, tmp[100];
	scanf("%d", &n);
	getchar();

	a = (char**)malloc(n * sizeof(char*));
	for (i = 0; i < n; i++) {
		gets(tmp);
		a[i] = (char*)malloc((strlen(tmp) + 1) * sizeof(char));
		strcpy(a[i], tmp);
	}
	for (i = n-1; i >0 ; i--) {
		for (j = 0; j < i; j++) {
			if(strlen(a[j]) < strlen(a[j + 1])) {
				strcpy(tmp, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], tmp);
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%s\n", a[i]);

	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);
	return 0;
}