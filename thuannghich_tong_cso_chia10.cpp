#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool thuannghich(ll n){
	ll rev = 0, tmp = n;
	while(tmp != 0){
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	if(rev == n) return true;
	else return false;
}

bool tongcs(ll n){
	ll tong = 0;
	while(n != 0){
		tong += n % 10;
		n /= 10;
	}
	if(tong % 10 != 0) return false;
	else return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll dem = 0;
		int start = 1, end = 1;
		for(int i = 0; i < n; i++){
			start *= 10;
			end *= 10;
		}
		start /= 10;
		for(ll i = start; i < end; i++){
			if(thuannghich(i) == 1 && tongcs(i)) dem++;
		}
		printf("%lld\n", dem);
	}
}

