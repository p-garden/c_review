#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a < 0)
		printf("cold, indoor");
	else if (a < 40)
		printf("moderate, outdoor");
	else
		printf("hot, indoor");

}