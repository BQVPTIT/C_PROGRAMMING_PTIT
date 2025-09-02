#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

ll tongcs(int n){
	ll tong = 0;
	while(n != 0){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

ll fibo[93];

bool fibonacci(int n){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	if(n == 0 || n == 1 || n == 2) return true;
	for(int i = 3; i <= 92; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if(fibo[i] == n) return true;
	}
	return false;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a > b) swap(&a, &b);
	for(int i = a; i <= b; i++){
		if(nt(i) == 1 && fibonacci(tongcs(i)) == 1) printf("%d ", i);
	}
}

