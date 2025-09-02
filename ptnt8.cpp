#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

int nt[1000001];

void sangnt(){
	for(int i = 0; i < 1000001; i++){
		nt[i] = true;
	}
	nt[0] = nt[1] = 1;
	for(int i = 2; i <= sqrt(1000001); i++){
		if(nt[i] == true){
			for(int j = i * i; j <= 1000001; j += i){
				nt[j] = false;
			}
		}
	}
}

ll ptnt(ll n){
	ll kq = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(nt[i] == true){
			while(n % i == 0){
				kq += i;
				n /= i;
			}
		}
	}
	if(n >= 2) kq += n;
	return kq;
}

int main(){
	sangnt();
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += ptnt(a[i]);
	}
	printf("%lld\n", sum);
}

