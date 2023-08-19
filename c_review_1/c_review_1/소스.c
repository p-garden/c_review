#include <stdio.h>
int main() {
	int a[20], i, f, r, m, tmp;
	scanf("%d%d%d", &f, &r, &m);
	for (i = 0; i < 20; i++) 
		a[i] = i + 1;
	
	tmp = a[r];
	for (i = r ; i >r-m ; i--) {
		a[i] = a[i - 1];
	}
	a[r - m+1] = tmp;
	
	for (i = 0; i < 20; i++)
		printf("%d ", a[i]);
}