#include <stdio.h>
int main() {
	int n[5],i,sum=0,flg=0,cnt=0;
	char cat[7];

	for (i = 0; i < 7; i++) {
		scanf("%c", &cat[i]);
	}
	
	for (i = 0; i < 7; i++) {
		if (cat[i] != 'c' && cat[i] != 'a'&&cat[i] != 't') {
			flg = 0;
			continue;
		}
		else {
			if (cat[i] == 'c' && flg == 0)
				flg++;
			else if (cat[i] == 'a' &&flg == 1)
				flg++;
			else if (cat[i] == 't'&&flg == 2)
				flg++;
			else
				flg = 0;
		}
		if (flg == 3) {
			cnt++;
			flg = 0;
		}
	}
	printf("%d", cnt);
}