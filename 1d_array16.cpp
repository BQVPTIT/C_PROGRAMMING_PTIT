#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

#define ll long long

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), sort);
	int min = a[0], min2 = -1;
	for(int i = 1; i < n; i++){
		if(a[i] != min){
			min2 = a[i];
			break;
		}
	}
	printf("%d %d", min, min2);
}

