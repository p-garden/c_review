#include <stdio.h>
int main() {
	int n,tmp,a=1000,i=0;
	char *num[] = { "one", "two","three","four","five","six","seven","eight","nine"};
	char *digit[] = { "THO", "HUN", "TEN","" };
	scanf("%d", &n);
	while (a) {
		tmp = n / a;
		if (tmp == 0) {
			a /= 10;
			i++;
			continue;
		}
		printf("%s %s ", num[tmp-1], digit[i]);
		i++;
		n -= tmp * a;
		a /= 10;
	}
	return 0;
}