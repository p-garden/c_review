#include <stdio.h>
int main() {
	int m,n,t,i,j,num,div_n,div,flg_t,cnt,cnt_max=0,max_line;
	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		scanf("%d%d", &n, &t);
		div_n = 0;
		for (j = 1; j <= n; j++) {
			if (n % j == 0)
				div_n++;
		}
		flg_t = 0, cnt=0;
		scanf("%d", &num);
		while (num > 0) {
			div = 0;
			for (j = 1; j <= num; j++) {
				if (num % j == 0)
					div++;
			}
			if (div % t == 0 && flg_t==0) {
				printf("%d ", num);
				flg_t++;
				cnt++;
			}
			else if (div == div_n) {
				printf("%d ", num);
				cnt++;
			}
			scanf("%d", &num);
		}
		if (cnt == 0)
			printf("none");
		if (cnt_max < cnt) {
			cnt_max = cnt;
			max_line = i;
		}
		printf("\n");
	}
	printf("%d %d", max_line, cnt_max);
}