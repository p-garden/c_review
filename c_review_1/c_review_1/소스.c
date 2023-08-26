#include <stdio.h>
int correct(int *);
int upper(int *);
int main() {
	int lot[6],flg;
	int *plot;
	for (plot = lot; plot < lot + 6; plot++) 
		scanf("%d", plot);
	flg=correct(lot);
	printf("%d\n", flg);
	for (plot = lot; plot < lot + 6; plot++)
		printf("%d ", *plot);
	return 0;
}
int correct(int *arr) {
	int *par, *qar,cnt,flg=0;
	for (par = arr; par < arr + 6; par++) {
		cnt = 0;
		for (qar = arr; qar < arr + 6; qar++) {
			if (*par == *qar)
				cnt++;
			if (cnt > 1) {
				*par = upper(arr);
				flg = 1;
				break;
			}
		}
	}
	if (flg == 1)
		return 1;
	else
		return 0;
}
int upper(int *arr) {
	int *par, *qar;
	int  ret = 1;
	for (par = arr; par < arr + 6; par++) {
		for (qar = arr; qar < arr + 6; qar++) {
			if (ret == *qar) 
				ret++;
		}
	}
	return ret;
}