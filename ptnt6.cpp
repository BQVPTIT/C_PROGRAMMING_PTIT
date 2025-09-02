#include <stdio.h>
#include <math.h>

#define ll long long

ll ptnt(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n >= 2) printf("%lld ", n);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ptnt(n);
		printf("\n");
	}
}


