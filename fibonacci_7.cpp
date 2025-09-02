#include <stdio.h>
#include <math.h>

#define ll long long

ll fibo[93];

ll fibonacci(ll n){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i <= 92; i++){
		fibo[i] = (fibo[i - 1] + fibo[i - 2]);
		if(fibo[i] >= n) return fibo[i];
	}
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%lld", fibonacci(n));
}

