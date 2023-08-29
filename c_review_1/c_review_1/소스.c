#include <stdio.h>
#include <string.h>
typedef struct vector {
	int a, b, c;
}vector;
int main() {
	vector v1, v2;
	scanf("%d%d%d", &v1.a, &v1.b, &v1.c);
	scanf("%d%d%d", &v2.a, &v2.b, &v2.c);
	printf("%d %d %d\n", v1.a*v2.a, v1.b*v2.b, v1.c*v2.c);
	printf("%d", (v1.a*v2.a + v1.b*v2.b + v1.c*v2.c));
}
