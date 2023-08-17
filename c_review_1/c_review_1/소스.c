#include <stdio.h>
int main() {
	char a,m1,m2;
	scanf("%c", &a);
	m1 ='z', m2 = 'z';
	while ('a' <= a && a <= 'z') {
		if (a < m1 && a < m2) {
			m2 = m1;
			m1 = a;
		}
		else if (a< m2 && a> m1)
			m2 = a;
		scanf("%c", &a);
	}
	printf("%c%c", m1, m2);
}