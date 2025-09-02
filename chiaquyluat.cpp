#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	ll n, k; scanf("%lld%lld", &n , &k);
	ll kq = n;
	ll cso = 0;
	while(kq != 0){
		kq /= 10;
		cso++;
	}
	ll d = 1;
	for(int i = 1; i <= cso - k; i++){
		d *= 10;
	}
	ll first = n / d;
	printf("%lld\n", first / k);
}

