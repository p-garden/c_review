#include <stdio.h>
int main() {
	int a, b, c,sum=0;
	scanf("%d%d%d", &a, &b, &c);
	if (a == 1) {
		printf("Pizza\n");
		sum += 15000;
	}
	else if (a == 2) {
		printf("Burger\n");
		sum += 5000;
	}
	else if (a == 3) {
		printf("Salad\n");
		sum += 4500;
	}
	else if (a == 4) {
		printf("Ice cream");
		sum += 800;
	}
	else if (a == 5) {
		printf("Beverage\n");
		sum += 500;
	}
	else
		printf("None\n");

	if (b == 1) {
		printf("Pizza\n");
		sum += 15000;
	}
	else if (b == 2) {
		printf("Burger\n");
		sum += 5000;
	}
	else if (b == 3) {
		printf("Salad\n");
		sum += 4500;
	}
	else if (b == 4) {
		printf("Ice cream");
		sum += 800;
	}
	else if (b == 5) {
		printf("Beverage\n");
		sum += 500;
	}
	else
		printf("None\n");

	if (c == 1) {
		printf("Pizza\n");
		sum += 15000;
	}
	else if (c == 2) {
		printf("Burger\n");
		sum += 5000;
	}
	else if (c == 3) {
		printf("Salad\n");
		sum += 4500;
	}
	else if (c == 4) {
		printf("Ice cream");
		sum += 800;
	}
	else if (c == 5) {
		printf("Beverage\n");
		sum += 500;
	}
	else
		printf("None\n");

	printf("Total:%dwon", sum);
}