#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool soDep(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] == '4') return false;
	}
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	ll tong = 0;
	for(int i = 0; i < n; i++){
		tong += (s[i] - '0');
	}
	if(tong % 10 != 0) return false;
	return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		for(int i = pow(10, n - 1); i <= pow(10, n); i++){
			char s[1001];
			sprintf(s, "%d", i);
			if(soDep(s)) printf("%d ", i);
		}
		printf("\n");
	}
}

