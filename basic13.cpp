#include<stdio.h>
#include<math.h>

#define ll long long

double tong(int n){
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (double)1/(2*i);
	}
	return sum;
}

int main(){
    int t = 1;
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%.5f\n", tong(n));
    }
}


