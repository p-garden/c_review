#include <stdio.h>
int main() {
	int i,j,n,sco[100],mat[100],pos,ins,flg=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &sco[i]);
	mat[0] = 0;
	for (i = 1; i < n; i++) {
		if (i == 1 || i == 2 || i == 4 || i == 8 || i == 16 || i == 32 || i == 64)
			mat[i] = mat[i - 1] + 1;
		else
			mat[i] = mat[i - 1];
	}
	pos = n;
	for (i = 0; i < n; i++) {
		if (sco[i] < 0 || sco[i] > 100) {
			flg = 1;
			printf("ERROR");
		}
	}
	while (mat[n-1]&&flg==0) {
		ins = 0;
		for (i = 0; i < pos; i+=2) {
			if (pos % 2 == 1) {
				if (i == pos - 1) {
					sco[ins] = sco[i];
					printf("%d ", sco[ins]);
					ins++;
				}
				else if (sco[i] < sco[i + 1]) {
					sco[ins] = sco[i + 1];
					printf("%d ", sco[ins]);
					ins++;
				}
				else {
					sco[ins] = sco[i];
					printf("%d ", sco[ins]);
					ins++;
				}
			}
			else {
				if (sco[i] < sco[i + 1]) {
					sco[ins] = sco[i + 1];
					printf("%d ", sco[ins]);
					ins++;
				}
				else {
					sco[ins] = sco[i];
					printf("%d ", sco[ins]);
					ins++;
				}
			}
		}
		printf("\n");
		pos = ins;
		mat[n-1]--;
	}
	

}