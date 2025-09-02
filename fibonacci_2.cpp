#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

ll fibo[93];

ll fibonacci(ll n){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i <= 92; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return fibo[n];
}

int main(){
	int t = 1;
	fibonacci(92);
	while(t--){
		ll n; scanf("%lld", &n);
		for(int i = 0; i < n; i++){
			printf("%lld ", fibo[i]);
		}
		printf("\n");
	}
}

