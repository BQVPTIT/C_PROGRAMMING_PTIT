#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

int sort1(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int sort2(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 < n2;
}

int main(){
	int n; scanf("%d", &n);
	int a[n], le[n], chan[n], kq[n];
	int ptle = 0, ptchan = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0) chan[ptchan++] = a[i];
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 1) le[ptle++] = a[i];
	}
	qsort(chan, ptchan, sizeof(int), sort1);
	qsort(le, ptle, sizeof(int), sort2);
	for(int i = 0; i < ptle; i++) kq[i] = le[i];
	for(int i = 0; i < ptchan; i++) kq[i + ptle] = chan[i];
	for(int i = 0; i < n; i++) printf("%d ", kq[i]);
}

