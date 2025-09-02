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
	int n, m; scanf("%d%d", &n, &m);
	int a[501][501];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(nt(a[i][j]) == 1) printf("%d ", a[i][j]); 
		}
		printf("\n");
	}
	printf("\n");
}

