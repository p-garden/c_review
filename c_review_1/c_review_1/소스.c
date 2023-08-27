#include <stdio.h>
#include <string.h>
void swap(char*, char*,int);
int main() {
	int n, i, j,a_b=0,b_a=0;
	char a[21], b[21],c[201];
	gets(a);
	gets(b);
	for (i = 1; i <= 10; i++) {
		swap(a, c, i);
		if (strcmp(c, b) == 0)
			a_b = 1;
	}
	for (i = 1; i <= 10; i++) {
		swap(b, c, i);
		if (strcmp(c, a) == 0)
			b_a = 2;
	}
	printf("%d", a_b+b_a);
}
void swap(char*a, char*b, int n) {
	int len = strlen(a),i,j,tmp,k;
	for (i = 0,j=0; i < len; i++,j++) {
		if ('a' <= a[i] && a[i] <= 'z') 
			b[j] = a[i] - n;
		else if ('A' <= a[i] && a[i] <= 'Z')
			b[j] = a[i] + n;
		else if ('0' <= a[i] && a[i] <= '9') {
			tmp = a[i] - '0';
			if ('0' <= a[i + 1] && a[i + 1] <= '9') {
				tmp *= 10;
				tmp += a[i + 1] - '0';
				i++;
			}
			for (k = 0; k < n; k++) {
				b[j] = tmp + 'A' - 1;
				j++;
			}
			j--;
		}
		else {
			b[j] = ' ';
		}
		b[j+1] = '\0';
	}
}


