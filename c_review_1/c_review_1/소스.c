#include <stdio.h>
typedef struct test {
	int sco1,sco2,sco3;
	char name[10];
	double avg;
}test;
void read_data(test*);
void cal_avg(test*);
void sort(test*);
void print_score(test*);
int main() {
	test a[10], *pa;
	read_data(a);
	cal_avg(a);
	sort(a);
	print_score(a);

}
void read_data(test *a) {
	test *pa;
	for (pa = a; pa < a + 10; pa++)
		scanf("%s%d%d%d", &pa->name, &pa->sco1, &pa->sco2, &pa->sco3);
}
void cal_avg(test *a) {
	test *pa;
	for (pa = a; pa < a + 10; pa++) 
		pa->avg = (pa->sco1 + pa->sco2 + pa->sco3) / 3.0;
}
void sort(test *a) {
	test *pa, *pb, tmp;
	for (pa = a+9; pa > a ; pa--) {
		for (pb = a; pb < pa; pb++) {
			if (pb->avg < (pb + 1)->avg) {
				tmp = *pb;
				*pb = *(pb + 1);
				*(pb + 1)= tmp;
			}
		}
	}
}
void print_score(test *a) {
	int i;
	printf("%s %.2lf\n", a->name, a->avg);
	printf("%s %.2lf\n", (a + 9)->name, (a + 9)->avg);
	for (i = 7; i < 10; i++)
		printf("%s %.2lf\n", (a+i)->name, (a+i)->avg);
}