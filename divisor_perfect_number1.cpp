#include <stdio.h>
#include <math.h>

#define ll long long

ll tonguoc(ll n){
	ll tong = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			tong += i;
			if(n / i != i){
				tong += n / i;
			}
		}
	}
	return tong;
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%lld", tonguoc(n));
}


