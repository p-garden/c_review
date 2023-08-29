#include <stdio.h>
typedef struct test {
	int high, low,pass_diff,diff;
	char pf;
}test;
void passorfail(test*);
int main() {
	test a,*pa=&a;
	scanf("%d%d%d", &a.high, &a.low, &a.pass_diff);
	a.diff = a.high - a.low;
	passorfail(pa);
	printf("%d %c", a.diff, a.pf);
}
void passorfail(test *a) {
	if (a->diff <= a->pass_diff)
		a->pf = 'P';
	else
		a->pf = 'F';
}