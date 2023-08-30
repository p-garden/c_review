#include <stdio.h>
#include <string.h>
typedef struct park {
	int car, code, in_year, in_mon, in_day, in_hour, in_min, out_year, out_mon, out_day, out_hour, out_min;
}park;
int park_fee(park);
int overlap(park*,int,int);
int main() {
	park a[100],tmp,*pa;
	int n,i,n_ans,ans,flg,fee;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a[i].car, &a[i].code);
		scanf("%d-%d-%d", &a[i].in_year, &a[i].in_mon, &a[i].in_day);
		scanf("%d:%d", &a[i].in_hour, &a[i].in_min);
		scanf("%d-%d-%d", &a[i].out_year, &a[i].out_mon, &a[i].out_day);
		scanf("%d:%d", &a[i].out_hour, &a[i].out_min);
	}
	scanf("%d", &n_ans);
	for (i = 0; i < n_ans; i++) {
		scanf("%d", &ans);
		flg=overlap(a, n, ans);
		if (flg == 1)
			printf("100000\n");
		else {
			for (pa = a; pa < a + n; pa++) 
				if (ans == pa->car) {
					tmp = *pa;
					break;
				}
			fee=park_fee(tmp);
			printf("%d\n", fee);
		}
	}
	return 0;
}
int park_fee(park a) {
	int in, out, time;
	in = a.in_hour * 60 + a.in_min;
	out = a.out_hour * 60 + a.out_min;
	time = out - in;
	if (time <= 60)
		return 3000;
	else if (time <= 270) {
		time -= 60;
		if (time % 10 == 0)
			return 3000 + (time / 10) * 1000;
		else
			return 3000 + ((time / 10) + 1) * 1000;
	}
	else
		return 30000;
}
int overlap(park* a,int n, int car) {
	park *pa;
	int cnt = 0,code;
	for (pa = a; pa < a + n; pa++) 
		if (car == pa->car)
			code = pa->code;
	for (pa = a; pa < a + n; pa++) {
		if (code == pa->code)
			cnt++;
	}
	if (cnt > 1)
		return 1;
	else 
		return 0;
}
