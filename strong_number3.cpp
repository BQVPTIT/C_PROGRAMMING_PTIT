#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

ll giaithua(int n){
	ll gt = 1;
	for(int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}

bool strong(int n){
	ll tmp = n;
	ll tong = 0;
	while(tmp != 0){
		tong += giaithua(tmp % 10);
		tmp /= 10;
	}
	if(tong != n) return false;
	else return true; 
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a, b; scanf("%d %d", &a, &b);
	if(a > b) swap(&a, &b);
	for(int i = a; i <= b; i++){
		if(strong(i)) printf("%d ", i);
	}
}

