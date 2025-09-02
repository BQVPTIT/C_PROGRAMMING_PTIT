#include<stdio.h>
#include<math.h>

#define ll long long

ll tong(int n){
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (ll)i*i*i;
	}
	return sum;
}

int main(){
    int t = 1;
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", tong(n));
    }
}
