#include <stdio.h>
int is_prime(int);
int next_prime(int);
int main() {
	int n, m,cnt=0,nxt;
	scanf("%d %d", &n, &m);
	while (cnt<m){
		nxt = next_prime(n);
		printf(" %d", nxt);
		cnt++;
		n = nxt;
	}
}
int is_prime(x) {
	int i,cnt=0;
	for (i = 1; i <= x; i++) {
		if (x%i == 0)
			cnt++;
	}
	if (cnt == 2)
		return 1;
	else
		return 0;
}
int next_prime(x) {
	int i;
	for (i = x + 1; ; i++) {
		if (is_prime(i) == 1) {
			return i;
		}
	}
}