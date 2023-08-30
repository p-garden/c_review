#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
	char name[8];
	int kor, eng, math;
	float avg;

}student;
int main() {
	int n,i;
	student *a;
	scanf("%d", &n);
	a = (student*)malloc(n * sizeof(student));
	for (i = 0; i < n; i++) {
		scanf("%s%d%d%d", a[i].name, &a[i].kor, &a[i].eng, &a[i].math);
		a[i].avg = (a[i].kor + a[i].eng + a[i].math) / 3.0;
	}
	for (i = 0; i < n; i++) {
		printf("%s %.1f ", a[i].name,a[i].avg);
		if (a[i].kor >= 90 || a[i].eng >= 90 || a[i].math >= 90)
			printf("GREAT ");
		if (a[i].kor < 70 || a[i].eng < 70 || a[i].math < 70)
			printf("BAD ");
		printf("\n");
	}
	free(a);
	return 0;
}