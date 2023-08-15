#include <stdio.h>
int main() {
	int kor,eng,mat;
	float avg;
	scanf("%d%d%d", &kor, &eng, &mat);
	avg = (kor + eng + mat) / 3.0;
	if (avg > 91.5) {
		printf("A");
		if (kor == 100 || eng == 100 || mat == 100)
			printf("GOOD");
		if (kor < 60 || eng < 60 || mat < 60)
			printf("BAD");
	}
	else if (avg > 85.5) {
		printf("B");
		if (kor == 100 || eng == 100 || mat == 100)
			printf("GOOD");
		if (kor < 60 || eng < 60 || mat < 60)
			printf("BAD");
	}
	else if (avg > 80.5) {
		printf("C");
		if (kor == 100 || eng == 100 || mat == 100)
			printf("GOOD");
		if (kor < 60 || eng < 60 || mat < 60)
			printf("BAD");
	}
	else {
		printf("F");
		if (kor == 100 || eng == 100 || mat == 100)
			printf("GOOD");
		if (kor < 60 || eng < 60 || mat < 60)
			printf("BAD");
	}


}