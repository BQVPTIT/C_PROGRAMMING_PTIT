#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n; scanf("%d", &n);
	int a[101] = {0}, b[101] = {0};
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++){
	    b[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(nt(a[i]) == 1 && b[a[i]] >= 1){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = 0;
		}
	}
}


