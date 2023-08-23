#include <stdio.h>
int a1, a2, a3;
int count_strike(int, int, int);
int count_ball(int, int, int);
int main() {
	int b1,b2,b3,flg=0,cnt_s,cnt_b;
	scanf("%d%d%d", &a1,&a2,&a3);
	while (flg == 0) {
		scanf("%d%d%d", &b1, &b2, &b3);
		cnt_s = count_strike(b1, b2, b3);
		cnt_b = count_ball(b1, b2, b3);
		printf("%dS%dB\n", cnt_s, cnt_b);
		if (cnt_s == 3)
			flg = 1;

	}
}
int count_strike(a, b, c) {
	int cnt = 0;
	if (a == a1)
		cnt++;
	if (b == a2)
		cnt++;
	if (c == a3)
		cnt++;
	return cnt;
}
int count_ball(a, b, c) {
	int cnt = 0;
	if (a == a2 || a == a3)
		cnt++;
	if ( b == a1 || b == a3)
		cnt++;
	if (c == a1 || c == a2 )
		cnt++;
	return cnt;
}