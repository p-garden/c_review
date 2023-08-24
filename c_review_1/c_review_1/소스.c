#include <stdio.h>
char decrypt(char, int);
char encrypt(char, int);
int main() {
	int n,m,len=0,i;
	char ch,ch_li[101],tmp, en_li[101];
	scanf("%c", &ch);
	while (ch != '*') {
		ch_li[len] = ch;
		len++;
		scanf("%c", &ch);
	}
	scanf("%d%d", &n, &m);
	for (i = 0; i < len; i++) {
		tmp=decrypt(ch_li[i],n);
		en_li[i] = tmp;
		printf("%c", tmp);
	}
	printf("\n");
	for (i = 0; i < len; i++) {
		tmp = encrypt(en_li[i], m);
		printf("%c",tmp);
	}
	return 0;
}
char decrypt(char ch, int m) {
	char ch1;
	if ('a' <= ch && ch <= 'z') {
		ch1 = ch - 'a' - m;
		if ('a' <= (ch1 + 'a') && (ch1 + 'a') <= 'z')
			return ch1 + 'a';
		else  if (ch1 < 0 && ('a' <= (ch1 + 'z' + 1) && (ch1 + 'z' + 1) <= 'z'))
			return (ch1 + 'z' + 1);
	}
	else if ('A' <= ch && ch <= 'Z') {
		ch1 = ch - 'A' - m;
		if ('A' <= (ch1 + 'A') && (ch1 + 'A') <= 'Z')
			return ch1 + 'A';
		else  if (ch1 < 0 && ('A' <= (ch1 + 'Z' + 1) && (ch1 + 'Z' + 1) <= 'Z'))
			return (ch1 + 'Z' + 1);
	}
	else
		return ch;
}
char encrypt(char ch, int m) {
	char ch1;
	if ('a' <= ch && ch <= 'z') {
		if ('a' <= (ch+m) && (ch + m) <= 'z')
			return(ch + m);
		else if ((ch + m) >'z')
			return (((ch + m) - 'a') % 26) + 'a';
	}
	else if ('A' <= ch && ch <= 'Z') {
		if ('A' <= (ch + m) && (ch + m) <= 'Z')
			return (ch + m);
		else if ((ch + m) >'Z')
			return (((ch + m) - 'A') % 26) + 'A';
	} 
	else 
		return ch; 
}
