#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool sohoanhao(int n){
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
	ll n; scanf("%lld", &n);
	if(sohoanhao(n)) printf("1\n");
	else printf("0\n");
}

