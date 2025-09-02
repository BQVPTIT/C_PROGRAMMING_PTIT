#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

#define ll long long

bool soMayman(ll n){
	ll cs4 = 0, cs7 = 0;
	while(n != 0){
		ll r = n % 10;
		if(r == 4) cs4++;
		if(r == 7) cs7++;
		n /= 10;
	}
	if(cs4 + cs7 != 4 && cs4 + cs7 != 7) return false;
	else return true;
}

int main(){
	ll n; scanf("%lld", &n);
	if(soMayman(n)) printf("YES\n");
	else printf("NO\n");
}


