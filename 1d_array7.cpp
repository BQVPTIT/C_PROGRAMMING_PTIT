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
	int a[n], b[n], c[n + n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++) scanf("%d", &b[i]);
	qsort(a, n, sizeof(int), sort1);
	qsort(b, n, sizeof(int), sort2);
	for(int i = 0; i < n; i++){
		c[2 * i] = a[i];
		c[2 * i + 1] = b[i];
	}
	for(int i = 0; i < 2 * n; i++) printf("%d ", c[i]);
}

