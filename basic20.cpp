#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ll long long

int main(){
	ll x;
	ll max = INT_MIN;
	while(scanf("%lld", &x) == 1){
		if(x > max) max = x;
	}
	printf("%lld\n", max);
}

