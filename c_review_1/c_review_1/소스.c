#include <stdio.h>
int main() {
	int y1,m1,d1,y2,m2,d2;
	scanf("%d/%d/%d", &y1, &m1, &d1);
	scanf("%d/%d/%d", &y2, &m2, &d2);
	if (y1 < y2)
		printf("%d/%d/%d", y1, m1, d1);
	else if (y2 < y1)
		printf("%d/%d/%d", y2, m2, d2);
	else {
		if (m1 < m2)
			printf("%d/%d/%d", y1, m1, d1);
		else if (m2 < m1)
			printf("%d/%d/%d", y2, m2, d2);
		else {
			if (d1 < d2)
				printf("%d/%d/%d", y1, m1, d1);
			else if (d2 < d1)
				printf("%d/%d/%d", y2, m2, d2);
			else
				printf("%d/%d/%d", y1, m1, d1);
		}
	}
	


}