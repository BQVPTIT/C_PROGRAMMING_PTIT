#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void convert10_k(ll n, ll k){
	char kq[101];
	int index = 0;
	if(n == 0){
		printf("0");
		return;
	}
	while(n != 0){
		ll r = n % k;
		if(r < 10) kq[index++] = r + '0';
		else if(r >= 10) kq[index++] = r - 10 + 'A';
		n /= k;
	}
	for(int i = index - 1; i >= 0; i--){
		printf("%c", kq[i]);
	}
}

int main(){
	int t = 1;
	while(t--){
		ll n; scanf("%lld", &n);
		int k = 16;
		convert10_k(n, k);
		printf("\n");
	}
}

