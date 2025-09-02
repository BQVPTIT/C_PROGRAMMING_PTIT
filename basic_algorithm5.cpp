#include <stdio.h>
#include <math.h>
#define ll long long


int main() {
    int t = 1;
    while (t--) {
        ll m, n;
        scanf("%lld %lld", &m, &n);


        ll max_domino = (m * n) / 2;
        printf("%lld\n", max_domino);
    }
}











