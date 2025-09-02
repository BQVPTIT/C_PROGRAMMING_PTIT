#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n; scanf("%d", &n);
	int a[51][51];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	ll tong = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j >= i){
				if(nt(a[i][j]) == 1) tong += a[i][j];
			}
		}
	}
	printf("%lld", tong);
}

