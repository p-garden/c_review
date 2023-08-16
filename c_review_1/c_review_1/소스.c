#include <stdio.h>
int main() {
	int a,sum=0,cnt=0,tmp;

	scanf("%d", &a);
	while (a > 0) {
		tmp = a;
		scanf("%d", &a);
		if (tmp <= 0)
			break;
		if (tmp> 100)
			continue;
		sum += tmp;
		cnt++;
	}
	
	printf("%d %.2f %d", sum,(float)sum/cnt, cnt);

	
}