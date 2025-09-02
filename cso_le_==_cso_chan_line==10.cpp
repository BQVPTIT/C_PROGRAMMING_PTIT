#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

int chanlebangnhau(ll n){
    int chan = 0, le = 0;
    while(n != 0){
        ll r = n % 10;
        if(r % 2 == 0) chan++;
        else le++;
        n /= 10;
    }
    if(chan == le) return true;
    else return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
	    int n; scanf("%d", &n);
	    ll line = 0;
	    int dau = pow(10, n - 1);
	    int cuoi = pow(10, n);
	    for(int i = dau; i < cuoi; i++){
	        if(chanlebangnhau(i)){
	            printf("%d ", i);
	            line++;
	            if(line == 10){
	                printf("\n");
	                line= 0;
	            }
	        }
	    }
	    printf("\n");
	}
}


