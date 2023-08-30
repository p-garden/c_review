#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, m,i,j,bs;
	char **p, alp;
	scanf("%d%d", &n, &m);
	p = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
		p[i] = (int*)malloc(n * sizeof(int));
	
	alp = 'a';
	bs = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			p[i][j] = alp;
			alp++;
			if (alp > 'z'&& bs == 0) {
				alp = 'A';
				bs = 1;
			}
			else if (alp > 'Z' && bs == 1) {
				alp = 'a';
				bs = 0;
			}
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%c ", p[i][j]);
		printf("\n");
	}
		
	for (i = 0; i < m; i++)
		free(p[i]);
	free(p);
	return 0;
}