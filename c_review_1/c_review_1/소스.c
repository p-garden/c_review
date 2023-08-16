#include <stdio.h>
int main() {
	int a,b,i,j,mul=1;
	scanf("%d%d", &a,&b);
	for (i = a; i <= b; i++) {
		printf("%d!=1", i);
		for (j = 2; j <= i; j++) {
			printf("*%d", j);
			mul *= j;
		}
		printf("=%d\n", mul);
		mul = 1;
	}
		
}