#include <stdio.h>
int main() {
	int a,g,tmp,cnt1=0,cnt2=0,cnt3=0;


	scanf("%d", &a);
	scanf("%d", &g);
	while (g) {
		while (g) {
			tmp = g % 10;
			if (tmp == a)
				cnt1++;
			else if (tmp < a)
				cnt2++;
			else
				cnt3++;
			g /= 10;
		}
		scanf("%d", &g);
	}
	printf("%d %d %d", cnt1, cnt2, cnt3);

	
}