#include <stdio.h>
int main() {
	int i;
	char a;
	scanf("%c%d",&a ,&i);
	if ('a' <= a && a <= 'z')
		printf("%c", (a -'a' + i) % 26 +'a' );
	else if ('A' <= a && a <='Z')
		printf("%c", (a - 'A' + i) % 26 + 'A');
	else
		printf("%c", a);


}