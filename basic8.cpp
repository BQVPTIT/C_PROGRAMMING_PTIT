#include<stdio.h>
#include<math.h>

#define ll long long

int main(){
    int t = 1;
    while(t--){
        ll a, b, c, d; scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(a * c == b * b && b * d == c * c) printf("YES\n");
		else printf("NO\n");
    }
}


