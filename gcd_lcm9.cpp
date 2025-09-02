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
    ll x, y, z, n; scanf("%lld%lld%lld%lld", &x, &y, &z, &n);
    ll min3 = bcnn(bcnn(x, y), z);
    ll start = 1, end = 1;
    for(int i = 0; i < n; i++){
        start *= 10;
        end *= 10;
    }
    start /= 10;
	ll a = start, b = min3;
	ll kq = (a / b + 1) * b;
    if(kq < end) printf("%lld\n", kq);
    else printf("-1\n");
}

