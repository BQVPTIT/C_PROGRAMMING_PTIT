#include <stdio.h>
#include <math.h>

#define ll long long

ll ptnt(ll n){
	int inrantdautien = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				if(inrantdautien > 0) printf("x");
				printf("%lld", i);
				inrantdautien++;
				n /= i;
			}
		}
	}
	if(n >= 2){
		if(inrantdautien > 0) printf("x");
		printf("%lld ", n);
		inrantdautien++;
	}
}

int main(){
	ll n; scanf("%lld", &n);
	ptnt(n);
	printf("\n");
}


