#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int x = n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int kt1 = x;
			if(j <= kt1) printf("~");
			else{
				printf("*");	
			}
		}
		x--;
		printf("\n");
	}
}


