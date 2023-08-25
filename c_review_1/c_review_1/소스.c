#include <stdio.h>
int main() {
	char ch[20],tmp;
	char *pch = &ch;
	int i=0,j;
	scanf("%c", &tmp);
	while (tmp != '#') {
		*(pch+i) = tmp;
		i++;
		scanf("%c", &tmp);
	}
	for (j = i-1; j >= 0; j--)
		printf("%c", *(pch+j));
	return 0;
}