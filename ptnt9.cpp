#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

ll ptnt(ll n){
	ll kq = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			kq *= i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n >= 2) kq *= n;
	return kq;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		printf("%lld\n", ptnt(n));
	}
}

