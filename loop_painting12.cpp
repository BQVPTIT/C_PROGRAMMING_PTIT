#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int x = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j <= x) printf(" ");
			else printf("*");
		}
		x++;
		printf("\n");
	}
}


