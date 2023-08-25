#include <stdio.h>
int *mid(int[]);
int main() {
	int arr[3];
	int *par;
	for (par = arr; par < arr + 3; par++)
		scanf("%d", par);
	printf("%d", *(mid(arr)));	
	return 0;
}
int *mid(int x[3]) {
	if ((*x <= *(x + 1) && *(x + 1) <= *(x + 2)) || (*(x + 2) <= *(x + 1) && *(x + 1) <= *x))
		return x + 1;
	else if ((*(x + 1) <= *x && *x <= *(x + 2)) || *(x + 2) <= *x && *x <= *(x + 1))
		return x;
	else
		return x + 2;
}