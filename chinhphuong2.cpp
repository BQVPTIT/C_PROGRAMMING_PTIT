#include <stdio.h>
#include <math.h>

#define ll long long

bool chinhphuong(ll n){
	ll x = sqrt(n);
	if(x * x == n) return true;
	else return false;
}

int main(){
	ll n; scanf("%lld", &n);
	if(chinhphuong(n)) printf("YES\n");
	else printf("NO\n");
}

