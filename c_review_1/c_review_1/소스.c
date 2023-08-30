#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int i,j, *a,add=5,cnt=0,tmp[20];
	a = (int*)malloc(add * sizeof(int));
	while (1) {
		scanf("%d", &a[cnt]);
		if (a[cnt] == -1)
			break;
		cnt++;
		if (cnt == add) {
			add += 3;
			for (j = 0; j < cnt; j++) 
				tmp[j] = a[j];
			free(a);
			a = (int*)malloc(add * sizeof(int));
			for (j = 0; j < cnt; j++) 
				a[j] = tmp[j];
		}
	}
	for (i = 0; i < cnt+1; i++)
		printf(" %d", a[i]);
	free(a);
	return 0;
}