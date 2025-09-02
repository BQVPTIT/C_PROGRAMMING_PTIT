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
	int a[201][201];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	ll dem = 0;
	for(int i = 0; i < n; i++){
		ll cheo1 = i;
		ll cheo2 = n - i - 1;
		if(nt(a[i][cheo1]) == 1) dem++;
		if(cheo1 != cheo2){
			if(nt(a[i][cheo2]) == 1) dem++;
		}
	}
	printf("%lld", dem);
}


