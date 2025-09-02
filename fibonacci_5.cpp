#include <stdio.h>
#include <math.h>

#define ll long long
const ll mod = 1000000007;

ll fibo[1000001];

ll fibonacci(ll n){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i < n; i++){
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % mod;
	}
	return fibo[n - 1];
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%lld", fibonacci(n));
}

