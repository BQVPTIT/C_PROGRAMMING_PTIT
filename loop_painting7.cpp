#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int x = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m + x; j++){
			int kt1 = x;
			int kt2 = j - kt1;
			if(j <= kt1) printf("~");
			else{
				if(i == 1 || i == n || kt2 == 1 || kt2 == m) printf("*");
				else printf(".");
			}
		}
		x++;
		printf("\n");
	}
}



