#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
		if (a % 3 == 0)
			if (a % 5 == 0)
				printf("A");
			else
				printf("B");
		else
			if (a % 5 == 0)
				printf("C");
			else
				printf("E");
	else
		if (a % 3 == 0)
			if (a % 5 == 0)
				printf("D");
			else
				printf("E");
		else
			if (a % 5 == 0)
				printf("E");
			else
				printf("N");


}