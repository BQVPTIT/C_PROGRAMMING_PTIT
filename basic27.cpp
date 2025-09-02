#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll min = INT_MAX, max = INT_MIN;
		while(n != 0){
			ll r = n % 10;
			if(r > max) max = r;
			if(r < min) min = r;
			n /= 10;
		}
		printf("%lld %lld\n", max, min);
	}
}

