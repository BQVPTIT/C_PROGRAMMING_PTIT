#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool nt(ll n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	ll n; scanf("%lld", &n);
	ll dem = 0;
	for(ll i = 2; i <= sqrt(n); i++){
		if(nt(i) == 1){
			dem++;
		}
	}
	printf("%lld", dem);
}


