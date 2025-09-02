#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

ll lat(ll n){
	ll rev = 0;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}

ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a = n;
		int b = lat(n);
		if(ucln(a, b) == 1) printf("YES\n");
		else printf("NO\n");
	}
}


