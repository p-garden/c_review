#include <stdio.h>
int n=0;
void die1(int);
void die2(int,int);
void die3(int,int,int);
int main() {
	int i;
	scanf("%d", &n);
	for (i = 1; i <= 6; i++) {
		die1(i);
	}
}
void die1(x) {
	int i;
	for (i = 1; i <= 6; i++) {
		die2(x, i);
	}

}
void die2(x, y) {
	int i;
	for (i=1;i<=6;i++) {
		die3(x, y, i);
	}
}
void die3(x, y, z) {
	if (x + y + z == n)
		printf("%d %d %d\n", x, y, z);

}