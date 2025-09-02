#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int t = 1;
    while(t--) {
        ll a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);

        ll right_step = (k + 1) / 2;  
        ll left_step = k / 2;   

        printf("%lld\n", a * right_step - b * left_step);
    }
}



