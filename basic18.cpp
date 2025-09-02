#include<stdio.h>
#include<math.h>

#define ll long long

ll giaithua(int n){
	ll gt = 1;
	for(int i = 1; i <= n; i++){
		gt *= (ll)i;
	}
	return gt;
}

int main(){
    int t = 1;
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", giaithua(n));
    }
}
