#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

void swap(ll *a, ll *b){
	ll tmp = *a;
	*a = *b;
	*b = tmp;
}

bool sohoanhao(ll n){
	ll tong = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			tong += i;
			if(n / i != i){
				tong += n / i;
			}
		}
	}
	if(tong - n == n) return true;
	else return false;
}

int main(){
	ll a, b; scanf("%lld %lld", &a, &b);
	if(a > b) swap(&a, &b);
	for(int i = a; i <= b; i++){
		if(sohoanhao(i)) printf("%lld ", i);
	}
}

