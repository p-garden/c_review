#include <stdio.h>
void swap(int*, int*);
int main() {
	int n, i,arr[50],a,b;
	int *par;
	
	scanf("%d", &n);
	for (par = arr; par < arr + n; par++)
		scanf("%d", par);
	scanf("%d%d", &a, &b);
	swap(arr + a, arr + b);
	for (par = arr; par < arr + n; par++)
		printf(" %d", *par);
	return 0;
}
void swap(int *a, int*b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}