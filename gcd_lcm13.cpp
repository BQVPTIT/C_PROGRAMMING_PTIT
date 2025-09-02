#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

ll bigInteger(ll a, char b[]){
	ll kq = 0;
	for(int i = 0; b[i] != '\0'; i++){
		kq = (kq * 10 + (b[i] - '0')) % a;
	}
	return kq;
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
	getchar();
	while(t--){
		ll a; scanf("%lld", &a);
		char b[10001];
		scanf("%s", &b);
		ll b_mod_a = bigInteger(a, b);
		ll kq = ucln(a, b_mod_a);
		printf("%lld\n", kq);
	}
}

