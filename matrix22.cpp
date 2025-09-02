#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ll long long

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int a[n][m];
	int min = INT_MAX, max = INT_MIN;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] < min) min = a[i][j];
			if(a[i][j] > max) max = a[i][j];
		}
	}
	printf("%d\n", min);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == min){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}
	printf("%d\n", max);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == max){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}
}

