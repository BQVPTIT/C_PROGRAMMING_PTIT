#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int t = 1;
    while(t--) {
        ll n, sum;
        scanf("%lld %lld", &n, &sum);
        ll kq = 0;
        for(ll coin = n; coin >= 1; coin--) {
            kq += sum / coin;
            sum %= coin;
        }
        printf("%lld\n", kq);
    }
}




