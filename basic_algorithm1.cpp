#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		ll sum1 = 0, sum2 = INT_MIN;
		for(int i = 0; i < n; i++){
			sum1 += a[i];
			if(sum1 < 0) sum1 = 0;
			sum2 = fmax(sum1, sum2);
		}
		printf("%lld\n", sum2);
	}
}


