#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int t= 1;
    while (t--) {
        ll n; scanf("%lld", &n);
        ll kq = (ll)n * (n - 1) / 2;
        printf("%lld\n", kq);
        printf("\n");
    }
}


