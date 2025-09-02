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
		ll a, b,c,d; scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(ucln(a, b) == ucln(c, d)) printf("YES\n");
		else printf("NO\n");
	}
}

