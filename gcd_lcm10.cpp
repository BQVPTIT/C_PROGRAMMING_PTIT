#include <stdio.h>
#include <math.h>

#define ll long long

ll demcso(ll n){
	ll dem = 0;
	while(n != 0){
		dem++;
		n /= 10;
	}
	return dem;
}

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
		ll cso = demcso(n);
		if(cso % 2 == 1){
			printf("INVALID\n");
		}
		else{
			ll right = 0, d = 1;
			for(int i = 0; i < cso / 2; i++){
				ll kytu = n % 10;
				right = kytu * d + right;
				d *= 10;
				n /= 10;
			}
			ll left = n;
			printf("%lld\n", bcnn(left, right));
		}
	}
}

