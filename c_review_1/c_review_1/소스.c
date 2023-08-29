#include <stdio.h>
#include <string.h>
typedef struct student {
	char name[10], code[11], grd;
}student;
int same(student*, student*);
int main() {
	student st[5],*pst,*qst;
	char name[10];
	int flg = 0;
	for (pst = st; pst < st + 5; pst++) {
		scanf("%s", pst->name);
		scanf("%s", pst->code);
		getchar();
		scanf("%c", &pst->grd);
	}
	scanf("%s", name);
	for (pst = st; pst < st + 5; pst++) {
		if (strcmp(name, pst->name) == 0) {
			qst = pst;
			break;
		}
	}
	for (pst = st; pst < st + 5; pst++) {
		if ((pst->grd == qst->grd) && (pst != qst) && (same(pst, qst)) == 1) {
			printf(" %s\n", pst->name);
			flg = 1;
		}
	}
	if (flg == 0)
		printf("0");
	return 0;
}
int same(student* a, student* b) {
	int flg = 1;
	if (a->code[0] != b->code[0])
		flg = 0;
	if (a->code[1] != b->code[1])
		flg = 0;
	if (a->code[2] != b->code[2])
		flg = 0;
	if (a->code[3] != b->code[3])
		flg = 0;
	return flg;
}
