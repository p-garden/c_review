#include <stdio.h>
int main() {
	int ans,gus,cnt=0;
	scanf("%d", &ans);
	do {
		scanf("%d", &gus);
		if (ans < gus)
			printf("%d>?\n", gus);
		else if (ans > gus)
			printf("%d<?\n", gus);
		else
			printf("%d==?\n", gus);
		cnt++;
	}

	while (ans != gus);
	printf("%d", cnt);
}