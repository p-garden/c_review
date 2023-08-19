#include <stdio.h>
int main() {
	int a[101], b[101], i, j,a_n=0,b_n=0,tmp,scn,mul[202],mul_n,flg;
	
	for (i = 0; i < 100; i++) {
		flg = 0;
		scanf("%d", &scn);
		for (j = 0; j < i; j++)
			if (scn == a[j]) {
				flg = 1;
			}
		if (scn < 0)
			break;
		else if (flg == 1) {
			i--;
			continue;
		}
		else {
			a[i] = scn;
			a_n++;
		}
	}

	for (i = 0; i < 100; i++) {
		flg = 0;
		scanf("%d", &scn);
		for (j = 0; j < i; j++)
			if (scn == b[j]) {
				flg = 1;
			}
		if (scn < 0)
			break;
		else if (flg == 1) {
			i--;
			continue;
		}
		else {
			b[i] = scn;
			b_n++;
		}
	}

	for (i = 0; i < a_n; i++) {
		mul[i] = a[i];
	}

	mul_n = a_n;
	for (i = 0; i < b_n; i++) {
		for (j = 0; j < a_n; j++) {
			if (b[i] == a[j])
				break;
			if (j == a_n - 1) {
				mul[mul_n] = b[i];
				mul_n++;
			}
		}
	}
	for (i = mul_n-1; i > 0 ; i--) {
		for (j = 0; j < i; j++) {
			if (mul[j] > mul[j + 1]) {
				tmp = mul[j];
				mul[j] = mul[j + 1];
				mul[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < mul_n; i++)
		printf(" %d", mul[i]);
	
}