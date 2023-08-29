#include <stdio.h>
#include <string.h>
typedef struct person {
	int id, arv, srv, wait;
}person;
void waitingtime(person[], int);
double avgtime(person[], int);
int main() {
	person pr[100];
	int i,n;
	double avg;
	scanf("%d", &n);
	for (i = 0; i < n; i++) 
		scanf("%d%d%d", &pr[i].id, &pr[i].arv, &pr[i].srv);
	waitingtime(pr, n);
	avg = avgtime(pr, n);
	printf("%.2lf", avg);
}
void waitingtime(person a[], int n) {
	int i,tmp=0;
	a[0].wait = 0;
	tmp += a[0].srv;
	for (i = 1; i < n; i++) {
		if (tmp <= a[i].arv) {
			a[i].wait = 0;
			tmp = a[i].srv + a[i].arv;
		}
		else {
			a[i].wait = tmp - a[i].arv;
			tmp += a[i].srv;
		}
	}
}
double avgtime(person a[], int n) {
	int sum = 0, i;
	double avg;
	for (i = 0; i < n; i++) {
		sum += a[i].wait;
	}
	avg = (double)sum / n;
	return avg;
}