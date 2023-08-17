#include <stdio.h>
int main() {
	int a,b;
	float avg;
	scanf("%d%d", &a, &b);
	avg = (a *0.4+ b*0.6);
	if (avg >= 85.5)
		printf("A ");
	else if (avg >= 75.5)
		printf("B ");
	else if (avg >= 60.0)
		printf("C ");
	else
		printf("F ");

	if (avg >= 60 || b >= 90)
		printf("PASS");
	else
		printf("FAIL");
}