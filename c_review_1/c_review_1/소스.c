#include <stdio.h>
#include <string.h>
typedef struct time {
	int h,m,s;
}vector;
int main() {
	vector t1, t2,t3;
	int flg = 0;
	scanf("%d%d%d", &t1.h, &t1.m, &t1.s);
	scanf("%d%d%d", &t2.h, &t2.m, &t2.s);
	if (t2.s >= t1.s) 
		t3.s = t2.s - t1.s;
	else {
		flg = -1;
		t3.s = t2.s + 60 - t1.s;
	}

	if (t2.m > t1.m) {
		t3.m = t2.m - t1.m + flg;
		flg = 0;
	}
	else {
		t3.m = t2.m - t1.m + 60 + flg;
		flg = -1;
	}

	if (t2.h > t1.h) 
		t3.h = t2.h - t1.h + flg;
	else {
		t3.h = t2.h - t1.h + 60 + flg;
	}
	printf("%d %d %d", t3.h, t3.m, t3.s);
}
