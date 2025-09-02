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
	ll last = n % 10;
	ll first = n;
	while(first >= 10){
		first /= 10;
	}
	ll kq = 10 * first + last;
	if(nt(kq) == 1) printf("YES\n");
	else printf("NO\n");
}


