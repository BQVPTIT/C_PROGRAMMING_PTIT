#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

bool chia5(int n){
	ll tong = 0;
	while(n != 0){
		tong += n % 10;
		n /= 10;
	}
	if(tong % 5 != 0) return false;
	else return true;
}

int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	for(int i = 2; i <= n; i++){
		if(nt(i) == 1 && chia5(i) == 1){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n");
	printf("%d\n", dem);
}

