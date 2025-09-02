#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int main(){
	int n; scanf("%d", &n);
	int a[201][201], b[201][201];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[j][i] = a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		qsort(b[i], n, sizeof(int), sort);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) printf("%d ", b[j][i]);
		printf("\n");
	}
}

