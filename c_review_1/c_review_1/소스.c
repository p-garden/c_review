#include <stdio.h>
int main() {
	int i,j,flg=0,cnt, a[10];

	for (i = 0; i <10; i++) 
		scanf("%d", &a[i]);
	
	for (i = 0; i < 10; i++) {
		for (j = i-1; j >= 0; j--) {
			if (a[i] == a[j])
				flg=1;
		}
		if (flg == 1) {
			flg = 0;
			continue;
		}
		cnt = 0;
		for (j = 0; j < 10; j++) {
			if (a[i] == a[j])
				cnt++;
		}
		printf("%d %d\n", a[i], cnt);
	}
	
	
}