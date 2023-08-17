#include <stdio.h>
int main() {
	int cnt_a=0,cnt_A=0, cnt_n=0,cnt_etc=0;
	char a;
	scanf("%c", &a);
	while (a != '*') {
		if ('a' <= a && a <= 'z')
			cnt_a++;
		else if ('A' <= a && a <= 'Z')
			cnt_A++;
		else if ('0' <= a && a <= '9')
			cnt_n += (a-'0');
		else
			cnt_etc++;
		scanf("%c", &a);
	}
	printf("%d %d %d %d", cnt_A, cnt_a, cnt_n, cnt_etc);
}