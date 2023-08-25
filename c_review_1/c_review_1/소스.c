#include <stdio.h>
int main() {
	int arr[5], rank[5] = {1,1,1,1,1};
	int *par,*par2,*pr;
	for (par = arr;par < arr + 5; par++) {
		scanf("%d", par);
	}
	for (par = arr,pr=rank; par < arr+5; par++,pr++) {
		for (par2 = arr; par2 < arr + 5; par2++) {
			if (*par < *par2)
				*pr += 1;
		}
	}
	for (par = arr,pr=rank; par < arr + 5; par++,pr++) {
		printf("%d=r%d ", *par, *pr);
	}
	return 0;
}