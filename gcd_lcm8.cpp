#include <stdio.h>
#include <math.h>

#define ll long long

ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll bcnn(ll a, ll b){
	return a / ucln(a, b) * b;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll bc = 1;
		for(int i = 2; i <= n; i++){
			bc = bcnn(bc, i);
		}
		printf("%lld\n", bc);
	}
}


