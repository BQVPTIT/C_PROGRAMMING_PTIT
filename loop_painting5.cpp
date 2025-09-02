#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int x = 2 * n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= x; j++){
			int kt1 = x - n;
			int kt2 = j - kt1;
			if(j <= kt1) printf("~");
			else{
				if(i == 1 || i == n || kt2 == 1 || kt2 == n) printf("*");
				else printf(".");
			}
		}
		x--;
		printf("\n");
	}
}


