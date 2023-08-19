#include <stdio.h>
int main() {
	int a[20], b[20], i, j, n, max[10], min[10], max_tmp, min_tmp, k,l,h;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++) {
		b[i] = a[n - i - 1];
		printf(" %d", b[i]);
	}
	printf("\n");
	k = 0;
	for (i = 0; i < n; i += 3) {
		max_tmp = a[i], min_tmp = a[i];
		for (j = i; j < i + 3; j++) {
			if (j >= n)
				break;
			if (max_tmp < a[j])
				max_tmp = a[j];
			if (min_tmp > a[j])
				min_tmp = a[j];
		}
		max[k] = max_tmp, min[k] = min_tmp;
		k++;
	}
	for (i = 0; i < k; i++)
		printf(" %d", max[i]);
	printf("\n");
	for (i = 0; i < k; i++)
		printf(" %d", min[i]);
	printf("\n");

	l = k;
	while (l >1 ) {
		k = l;
		l = 0;
		for (i = 0; i < k; i += 3) {
			max_tmp = max[i], min_tmp = min[i];
			for (j = i; j < i + 3; j++) {
				if (j >= k)
					break;
				if (max_tmp < max[j])
					max_tmp = max[j];
				if (min_tmp > min[j])
					min_tmp = min[j];
			}
			max[l] = max_tmp, min[l] = min_tmp;
			l++;
		}

		for (i = 0; i < l; i++)
			printf(" %d", max[i]);
		printf("\n");
		for (i = 0; i < l; i++)
			printf(" %d", min[i]);
		printf("\n");
	}
}