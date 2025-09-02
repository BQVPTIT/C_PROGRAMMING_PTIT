#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int t = 1;
    while(t--) {
        double a;
        scanf("%lf", &a);
        printf("%lld\n", (ll)(a + 0.5));
    }
}

