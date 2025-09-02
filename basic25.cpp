#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll tmp = n;
		ll chan = 0, le = 0;
		while(tmp != 0){
			ll r = tmp % 10;
			if(r % 2 == 0) chan++;
			else le++;
			
			tmp /= 10;
		}
		printf("%lld %lld\n", le, chan);
	}
}

