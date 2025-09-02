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

ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int kq = ucln(a, b);
		ll tong = 0;
		while(kq != 0){
			tong += kq % 10;
			kq /= 10;
		}
		if(nt(tong) == 1) printf("YES\n");
		else printf("NO\n");
	}
}

