#include <stdio.h>
#include <math.h>

#define ll long long

void latmang(int n, int a[]){
	for(int i = 0; i < n / 2; i++){
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[101];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	latmang(n, a);
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
}

