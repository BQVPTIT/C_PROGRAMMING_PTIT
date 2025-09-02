#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		int cheo1 = i;
		int cheo2 = n - i - 1;
		int tmp = a[i][cheo1];
		a[i][cheo1] = a[i][cheo2];
		a[i][cheo2] = tmp;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
}



