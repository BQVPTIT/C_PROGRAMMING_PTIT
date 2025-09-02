#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

#define ll long long

ll demuoc(ll n){
	ll dem = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0) dem++;
			if(n / i != i){
				if((n / i) % 2 == 0) dem++;
			} 
		}
	}
	return dem;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", demuoc(n));
	}
}

