#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll last = n % 10;
		ll first = n;
		while(first >= 10){
			first /= 10;
		}
		if(first == last) printf("YES\n");
		else printf("NO\n");
	}
}

