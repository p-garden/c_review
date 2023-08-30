#include <stdio.h>
#include <string.h>
typedef struct hotel {
	char name[31], brf;
	int grd;
	double star, dst;
}hotel;
int in_hotel_info(hotel *);
void out_hotel_info(hotel*, int,int, double);
int main() {
	hotel a[100];
	int n,grd;
	double dst;
	n=in_hotel_info(a);
	scanf("%d%lf", &grd, &dst);
	out_hotel_info(a, n, grd, dst);
}
int in_hotel_info(hotel *a) {
	int n = 0;
	scanf("%s", &a->name);
	while (strcmp(a->name, "0")) {
		scanf("%d%lf%lf", &a->grd, &a->star, &a->dst);
		getchar();
		scanf("%c", &a->brf);
		a++, n++;
		scanf("%s", &a->name);
	}
	return n;
}
void out_hotel_info(hotel*a, int n, int g,double d) {
	int i,j=0;
	double max=0;
	hotel *pa,tmp[100], ttmp;
	for (i = 0; i < n; i++) {
		if (((a + i)->grd >= g) && ((a + i)->dst <= d)) {
			tmp[j] = *(a + i);
			j++;
		}
	}
	for (i = j-1; i > 0; i--) {
		for (pa = tmp; pa < tmp+i; pa++) {
			if (pa->star > (pa + 1)->star) {
				ttmp = *pa;
				*pa = *(pa + 1);
				*(pa + 1) = ttmp;
			}
			else if ((pa->star == (pa + 1)->star) && (strcmp(pa->name, (pa + 1)->name)<0) ) {
				ttmp = *pa;
				*pa = *(pa + 1);
				*(pa + 1) = ttmp;
			}
		}
	}
	for (i = j - 1; i >= 0; i--) {
		printf("%s %d %.1lf %.1lf %c\n", tmp[i].name, tmp[i].grd, tmp[i].star, tmp[i].dst, tmp[i].brf);
	}
}