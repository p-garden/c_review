#include <stdio.h>
int main() {
	int kor1, eng1, kor2, eng2;
	float avg1, avg2,tmp;
	scanf("%d%d%d%d", &kor1, &eng1, &kor2, &eng2);
	avg1 = (kor1 + eng1) / 2.0, avg2 = (kor2 + eng2) / 2.0;
	if (avg1 > avg2)
		tmp = avg1;
	else
		tmp = avg2;

	if (kor1 < 60 || eng1 < 60 || kor2 < 60 || eng2 < 60)
		printf("F");
	else if (tmp >= 90)
		printf("A+");
	else if (tmp >= 80)
		printf("A");
	else if (tmp >= 70)
		printf("B+");
	else if (tmp >= 60)
		printf("B");
}