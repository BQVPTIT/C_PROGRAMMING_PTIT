#include<stdio.h>
#include<math.h>

#define ll long long

double tonggiaithua(int n){
	double sum = 0;
	double gt = 1;
	for(int i = 0; i <= n-1; i++){
		if(i > 0) gt *= i;
		sum += (double)1/gt;
	}
	return sum;
}

int main(){
    int t = 1;
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%.4f\n", tonggiaithua(n));
    }
}


