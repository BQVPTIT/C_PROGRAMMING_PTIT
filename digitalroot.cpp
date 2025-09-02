#include <stdio.h>
#include <math.h>

#define ll long long

ll tongcs(ll n){
	ll tong = 0;
	while(n != 0){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main(){
	ll n; scanf("%lld", &n);
	while(n >= 10){
		n = tongcs(n);
	}
	printf("%lld\n", n);
}


