#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int a[n], b[m], c[n + m];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < m; i++) scanf("%d", &b[i]);
	for(int i = 0; i < n; i++) c[i] = a[i];
	for(int i = 0; i < m; i++) c[i + n] = b[i];
	qsort(c, n + m, sizeof(int), sort);
	for(int i = 0; i < n + m; i++) printf("%d ", c[i]);
}

