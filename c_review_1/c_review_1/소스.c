#include <stdio.h>
int main() {
	char a[40], b[20], *pa, *pb;
	int i = 0, n, a_len = 0, b_len = 0;
	scanf("%s", a);
	scanf("%s", b);
	scanf("%d", &n);
	while (a[i]) {
		a_len++;
		i++;
	}
	i = 0;
	while (b[i]) {
		b_len++;
		i++;
	}
	for (pa = a + a_len + b_len - 1; pa >= a + b_len + n; pa--) {
		*pa = *(pa - b_len);
	}
	for (pa = a + n, pb = b; pb < b + b_len; pa++, pb++)
		*pa = *pb;
	a[a_len + b_len] = '\0';
	printf("%s", a);
	return 0;
}