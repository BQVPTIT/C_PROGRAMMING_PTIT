#include <stdio.h>
#include <math.h>

#define ll long long
const ll mod = 1000000007;

ll pascal[1001][1001];

ll combination(ll n, ll k) {
    for (ll i = 0; i <= n; i++) {
        for (ll j = 0; j <= i; j++) {
            if (j == 0 || j == i) pascal[i][j] = 1;
            else pascal[i][j] = (pascal[i - 1][j - 1] + pascal[i - 1][j]) % mod;
        }
    }
    return pascal[n][k];
}

int main(){
    int t = 1;
    while (t--) {
        ll n, k;
        scanf("%lld %lld", &n, &k);
        printf("%lld\n", combination(n, k));
    }
}





