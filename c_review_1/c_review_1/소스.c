#include <stdio.h>
int main() {
	char a[10],max_ch;
	char *pa,*pa2;
	int max = 0, cnt;
	for (pa = a; pa < a + 10; pa++) 
		scanf("%c", pa);
	for (pa = a; pa < a + 10; pa++) {
		cnt = 0;
		for (pa2 = a; pa2 < a + 10; pa2++) {
			if (*pa == *pa2) 
				cnt++;	
		}
		if (max < cnt) {
			max = cnt;
			max_ch = *pa;
		}
	}
	printf("%c %d", max_ch, max);

	return 0;
}