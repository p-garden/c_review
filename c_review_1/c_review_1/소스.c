#include <stdio.h>
int *max(int[]);
int *min(int[]);
int main() {
	int n,i,ar[100],tmp,cnt;
	int *par,*pmax,*pmin;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (par = ar;; par++) {
			scanf("%d", par);
			if (*par == 0)
				break;
		}
		pmax = max(ar), pmin = min(ar);
		cnt = 0;
		if (pmax < pmin) {
			for (par = pmax + 1; par < pmin; par++) {
				printf("%d ", *par);
				cnt++;
			}
		}
		else {
			for (par = pmin + 1; par < pmax; par++) {
				printf("%d ", *par);
				cnt++;
			}
		}
		if (cnt == 0)
			printf("none");
		printf("\n");
	}
	return 0;
}
int *max(int a[]) {
	int max = *a, *pa, *max_pos = a;
	for (pa = a;; pa++) {
		if (*pa == 0)
			break;
		if (max < *pa) {
			max = *pa;
			max_pos = pa;
		}
	}
	return max_pos;
	
}
int *min(int a[]) {
	int min = *a, *pa, *min_pos = a;
	for (pa = a;; pa++) {
		if (*pa == 0)
			break;
		if (min > *pa) {
			min = *pa;
			min_pos = pa;
		}
	}
	return min_pos;
}