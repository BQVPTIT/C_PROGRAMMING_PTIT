#include <stdio.h>
#include <math.h>

#define ll long long

int tang = 1;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[21][21], b[21][21];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(j <= i) a[i][j] = j;
				else a[i][j] = 0;
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				b[j][i] = a[i][j];
			}
		}
		int c[21][21];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				c[i][j] = 0;
				for(int k = 1; k <= n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("Test %d:\n", tang++);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}


