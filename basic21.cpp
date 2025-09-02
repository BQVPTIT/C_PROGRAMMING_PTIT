#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
	int x;
	int max = INT_MIN, min = INT_MAX;
	while(scanf("%d", &x) == 1){
		if(x > max) max = x;
		if(x < min) min = x;
	}
	printf("%d %d", max, min);
}

