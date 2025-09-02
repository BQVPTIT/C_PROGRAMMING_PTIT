#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool nt(ll n){
	if(n < 2) return false;
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

bool thuannghich(ll n){
	ll rev = 0, tmp = n;
	while(tmp != 0){
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	if(rev == n) return true;
	else return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll a, b; scanf("%lld%lld", &a, &b);
		ll line = 0;
		for(ll i = a; i <= b; i++){
			if(nt(i) == 1 && thuannghich(i) == 1){
				printf("%lld ", i);
				line++;
				if(line == 10){
					printf("\n");
					line = 0;
				}
			} 
		}
		printf("\n");
	}
}
