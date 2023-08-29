#include <stdio.h>
typedef struct test {
	int sco;
	char name[10];
}test;
test *select_min(test*);
int main() {
	test a[5], *pa;
	for (pa = a; pa < a + 5; pa++)
		scanf("%s %d", &pa->name, &pa->sco);
	pa = select_min(a);
	printf("%s %d", pa->name, pa->sco);

}
test *select_min(test *a) {
	test *pa, *pb;
	int min=101;
	for (pa = a; pa < a + 5; pa++) {
		if (min > pa->sco) {
			min = pa->sco;
			pb = pa;
		}
	}
	return pb;
}