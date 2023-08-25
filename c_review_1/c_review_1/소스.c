#include <stdio.h>
int main() {
	int x[3], n,i,cnt=0,*tmp;
	int *px,*py;

	for (px = x; px < x + 3; px++)
		scanf("%d", px);
	
	for (px = x+2; px >=x; px--) {
		for (py = x; py < px; py++) {
			if (*py < *(py + 1)) {
				tmp = *py;
				*py = *(py + 1);
				*(py + 1) = tmp;
			}
		}
	}
	px = &x;
	printf("%d", *(px + 1));
	return 0;
}