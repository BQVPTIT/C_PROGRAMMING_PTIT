#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		ll n, u1, d; scanf("%lld%lld%lld", &n,&u1,&d);
		ll kq = (ll)n * (u1 + u1 + (ll)(n - 1) * d) / 2;
		printf("%lld", kq);
		printf("\n");
	}
}


