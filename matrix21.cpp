#include <stdio.h>
#include <math.h>

#define ll long long

ll fibo[93];

void fibonacci(int n){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i < n * n; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

int main(){
	int n; scanf("%d", &n);
	ll a[11][11];        
	fibonacci(n);
	int vong = 0, gt = 0, cotmax = n - 1, hangmax = n - 1;
	while(vong <= n / 2){
		for(int i = vong; i <= cotmax; i++) a[vong][i] = fibo[gt++];
		for(int i = vong + 1; i <= hangmax; i++) a[i][cotmax] = fibo[gt++];
		for(int i = cotmax - 1; i >= vong; i--) a[hangmax][i] = fibo[gt++];
		for(int i = hangmax - 1; i >= vong + 1; i--) a[i][vong] = fibo[gt++];
		vong++, cotmax--, hangmax--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
}


