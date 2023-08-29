#include <stdio.h>
typedef struct body {
	int gen, wgh, hgh;
}body;
int grd(body);
int main() {
	body a,*pa;
	int n, i = 0, cnt[3] = {0},tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &a.gen, &a.wgh, &a.hgh);
		tmp = grd(a);
		cnt[tmp - 1] ++;
	}
	for (i = 0; i < 3; i++)
		printf("%d ", cnt[i]);
}
int grd (body a) {
	if (a.gen == 1) {
		if (a.wgh < 60) {
			if (a.hgh < 165)
				return 1;
			else if (a.hgh < 175)
				return 2;
			else
				return 3;
		}
		else if (a.wgh < 70) {
			if (a.hgh < 165)
				return 3;
			else if (a.hgh < 175)
				return 1;
			else
				return 2;
		}
		else {
			if (a.hgh < 165)
				return 2;
			else if (a.hgh < 175)
				return 3;
			else
				return 1;
		}
	}
	else {
		if (a.wgh < 50) {
			if (a.hgh < 165)
				return 1;
			else if (a.hgh < 175)
				return 2;
			else
				return 3;
		}
		else if (a.wgh < 60) {
			if (a.hgh < 165)
				return 3;
			else if (a.hgh < 175)
				return 1;
			else
				return 2;
		}
		else {
			if (a.hgh < 165)
				return 2;
			else if (a.hgh < 175)
				return 3;
			else
				return 1;
		}
	}
}