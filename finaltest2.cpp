#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define ll long long

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int main(){
	int n; scanf("%d", &n);
	int a[101] = {0}, b[101] = {0};
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), sort);
	for(int i = 0; i < n; i++){
		b[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(b[a[i]] % 2 == 0 && b[a[i]] >= 2){
			printf("%d %d", a[i], b[a[i]]);
			printf("\n");
			b[a[i]] = 0;
		}
	}
}

