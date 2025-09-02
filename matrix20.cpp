#include <stdio.h>
#include <math.h>

#define ll long long

int tang = 1;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[101][101];
		int vong = 0, gt = n * n, cotmax = n - 1, hangmax = n - 1;
		while(vong <= n / 2){
			for(int i = vong; i <= cotmax; i++) a[vong][i] = gt--;
			for(int i = vong + 1; i <= hangmax; i++) a[i][cotmax] = gt--;
			for(int i = cotmax - 1; i >= vong; i--) a[hangmax][i] = gt--;
			for(int i = hangmax - 1; i >= vong + 1; i--) a[i][vong] = gt--;
			vong++, cotmax--, hangmax--;
		}
		printf("Test %d:\n", tang++);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
}

