#include <stdio.h>
#include <string.h>
int in_cnt(char*, char*);
int main() {
	int cnt;
	char a[101], b[101];
	gets(a);
	scanf("%s", b);
	cnt = in_cnt(a, b);
	printf("%d", cnt);
	
}
int in_cnt(char *a, char*b) {
	int len_a,len_b,i,cnt=0,tmp_cnt;
	char *pa, *pb;
	len_a = strlen(a);
	len_b = strlen(b);
	for (pa = a; pa < a + len_a; pa++) {
		if ((*(pa-1) == ' ' || *(pa-1) == '.' || pa == a)&& (*pa==b[0]) && (*(pa+len_b)==' ' || *(pa+len_b)=='.'||*(pa+len_b)=='\0')) {
			tmp_cnt = 0;
			for (pb = b,i=0; pb < b + len_b;i++, pb++) {
				if (*pb == *(pa + i))
					tmp_cnt++;
			}
			if (tmp_cnt == len_b) {
				cnt++;
				pa += len_b;
			}
		}
	}
	return cnt;
}