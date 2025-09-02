#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[101][101];
	int vong = 0, gt = 1, cotmax = n - 1, hangmax = n - 1;
	while(vong <= n / 2){
		for(int i = vong; i <= cotmax; i++) a[vong][i] = gt++;
		for(int i = vong + 1; i <= hangmax; i++) a[i][cotmax] = gt++;
		for(int i = cotmax - 1; i >= vong; i--) a[hangmax][i] = gt++;
		for(int i = hangmax - 1; i >= vong + 1; i--) a[i][vong] = gt++;
		vong++, cotmax--, hangmax--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
}

/* 

1 2 3 4 5

16 17 18 19 6

15 24 25 20 7

14 23 22 21 8

13 12 11 10 9

h1:cot++->cot 0 den n - 1,vong->a[vong][i]=gt++
h2:hang++->hang 1 den n - 1, a[i][cot]
h3:cot--->cot n -2 den cot 0-> a[hang][i]
h4:hang--->hang n-2 den hang 1-> a[i][vong]

*/



