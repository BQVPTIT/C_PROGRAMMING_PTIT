#include <stdio.h>
#include <math.h>

#define ll long long 

int sort(const void *a, const void *b){
	ll tong1 = 0, tong2 = 0;
	ll n1 = *(int*)a, n2 = *(int*)b;
	while(n1 != 0){
		tong1 += n1 % 10;
		n1 /= 10;
	}
	while(n2 != 0){
		tong2 += n2 % 10;
		n2 /= 10;
	}
	if(tong1 == tong2) return n1 > n2;
	else if(tong1 != tong2) return tong1 > tong2;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), sort);
		for(int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
}

