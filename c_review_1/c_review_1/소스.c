#include <stdio.h>
int main() {
	int a1,a2,a3,g1,g2,g3,s=0,b=0;
	scanf("%d%d%d", &a1, &a2, &a3);
	scanf("%d%d%d", &g1, &g2, &g3);
	if (a1 == g1)
		s++;
	if (a2 == g2)
		s++;
	if (a3 == g3)
		s++;
	if (a1 == g2)
		b++;
	if (a1 == g3)
		b++;
	if (a2 == g1)
		b++;
	if (a2 == g3)
		b++;
	if (a3 == g1)
		b++;
	if (a3 == g2)
		b++;

	printf("%dS%dB", s, b);
}