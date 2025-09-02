#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	if(n < 2){
		printf("-1\n");
		return 0;
	} 
	int dem2 = 0, dem3 = 0;
	//so hang trong tong
	if(n % 2 == 0){
		dem2 = n / 2;
	}
	else if(n % 2 == 1){
		dem3 = 1;
		dem2 = (n - 3) / 2;
	}
	printf("%d\n", dem2 + dem3);
	// cac so hang trong tong tang dan
	for(int i = 1; i <= dem2; i++) printf("2 ");
	if(dem3 == 1) printf("3 ");
}

