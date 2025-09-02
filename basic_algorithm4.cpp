#include <stdio.h>
#include <math.h>

#define ll long long
const ll mod = 1000000007;

ll chiadu(ll a, ll b) {
    return ((a % mod) * (b % mod)) % mod;
}

ll luythua(ll n, ll k) {
    if (k == 0) return 1;
    ll x = luythua(n, k / 2);
    if (k % 2 == 0) return chiadu(x, x);
    else {
        ll kq = chiadu(x, x);
        return chiadu(kq, n);
    }
}

int main() {
    int t = 1;
    while (t--) {
        ll n, k;
        scanf("%lld %lld", &n, &k);
        printf("%lld\n", luythua(n, k));
    }
}




