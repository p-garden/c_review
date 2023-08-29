#include <stdio.h>
#include <string.h>
typedef struct student {
	char name[8];
	int kor, eng, math;
	double avg;
	char grd;
}student;
int main() {
	student st[50], *p = st,*q;
	int n;
	double avg;
	scanf("%d", &n);

	for (q = p; q < p + n; q++) {
		scanf("%s", &q->name);
		scanf("%d%d%d", &q->kor, &q->eng, &q->math);
	}
	
	for (q = p; q < p + n; q++) {
		printf("%s", q->name);
		avg = (q->kor + q->eng + q->math) / 3.0;
		printf(" %.1lf", avg);
		if (avg >= 90 )
			printf(" A");
		else if (avg >= 80)
			printf(" B");
		else if (avg >= 70)
			printf(" C");
		else
			printf(" D");
		printf("\n");
	}	
}