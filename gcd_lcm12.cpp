#include <stdio.h>
#include <math.h>

#define ll long long

ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll bcnn(ll a, ll b){
	return a / ucln(a, b) * b;
}

int main(){
	int n; scanf("%d", &n);
	int a = n % 1000;
	n /= 1000;
	int b = n;
	printf("%d", ucln(a, b));
}

