#include <stdio.h>
int max1=0, max2=0;
void update_max(int);
int main() {
	int x1,x2;
	scanf("%d%d", &x1,&x2);
	if (x1 > x2)
		max1 = x1, max2 = x2;
	else
		max1 = x2, max2 = x1;
	while (x1) {
		update_max(x1);
		scanf("%d", &x1);
	}
	printf("%d %d", max1, max2);
}
void update_max(x) {
	if (max1 <= x && max2 <= x)
		max2 = max1, max1 = x;
	else if (max1 >= x && max2 <= x)
		max2 = x;

}