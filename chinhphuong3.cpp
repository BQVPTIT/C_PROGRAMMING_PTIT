#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		ll m, n; scanf("%lld %lld", &m, &n);
		ll dau = ceil(sqrt(m)), cuoi = floor(sqrt(n));
		ll dem = cuoi - dau + 1;
		printf("%lld\n", dem);
		for(int i = dau; i <= cuoi; i++){
			printf("%lld\n", i * i);
		}
	}
}

