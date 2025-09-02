#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int x = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == 2 || i == n){
				if(j <= x) printf("*");
			}
			else{
				if(j <= x){
					if(j == 1 || j == x) printf("*");
					else printf(".");
				}
			}
		}
		x++;
		printf("\n");
	}
}


