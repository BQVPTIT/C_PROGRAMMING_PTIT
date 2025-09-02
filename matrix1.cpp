#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

int main(){
	ll n; scanf("%lld", &n);
	ll a[101][101];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%lld", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1) printf("%lld ", a[i][j]);
		}
	}
}

