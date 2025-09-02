#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool chinhphuong(ll n){
	ll x = sqrt(n);
	if(x * x == n) return true;
	else return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		if(chinhphuong(n)) printf("YES\n");
		else printf("NO\n");
	}
}

