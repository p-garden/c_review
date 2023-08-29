#include <stdio.h>
typedef struct date {
	int y, m, d;
}date;
date *select_min(date*, date*);
int main() {
	date a,b,c, *pc=&c;
	scanf("%d/%d/%d", &a.y, &a.m, &a.d);
	scanf("%d/%d/%d", &b.y, &b.m, &b.d);
	pc = select_min(&a, &b);
	printf("%d/%d/%d", pc->y, pc->m, pc->d);
}
date *select_min(date *a, date *b) {
	if (a->y > b->y)
		return b;
	else if (a->y < b->y)
		return a;
	else {
		if (a->m > b->m)
			return b;
		else if (a->m < b->m)
			return a;
		else {
			if (a->d > b->d)
				return b;
			else 
				return a;
		}
	}
}