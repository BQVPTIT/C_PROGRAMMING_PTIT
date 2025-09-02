#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

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

int main(){
	int n; scanf("%d", &n);
	if(fibonacci(n)) printf("1\n");
	else printf("0\n");
}

