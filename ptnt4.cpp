#include <stdio.h>
#include <math.h>

#define ll long long

void ptnt(int n){
	printf("%d = ", n);
	int inxong1nt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		int mu = 0;
		if(n % i == 0){
			while(n % i == 0){
				mu++;
				n /= i;
			}
		}
		if(mu >= 1){
			if(inxong1nt >= 1) printf(" * ");
			printf("%d^%d", i, mu);
			inxong1nt++;
		}
	}
	if(n >= 2){
		if(inxong1nt >= 1) printf(" * ");
		printf("%d^1", n);
		inxong1nt++;
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		ptnt(n);
		printf("\n");
	}
}


