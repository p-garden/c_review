#include <stdio.h>
int main() {
	int a,i,sum=0;
	scanf("%d", &a);

	for (i = 1; ;i++) {
		sum += i;
		if (i == a)
			break;
	}
	printf("%d", sum);

	
}