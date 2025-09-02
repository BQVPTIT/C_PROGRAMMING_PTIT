#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool thuannghich(ll n){
	ll rev = 0, tmp = n;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if(rev == tmp) return true;
	else return false;
}

int main(){
	ll n; scanf("%lld", &n);
	ll a[201][201];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%lld", &a[i][j]);
	}
	ll dem = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j <= i){
				if(thuannghich(a[i][j]) == 1){
					dem++;
				} 
			}
		}
	}
	printf("%lld", dem);
}

