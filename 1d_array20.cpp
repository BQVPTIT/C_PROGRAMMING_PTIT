#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long
#define MAX 20000001
#define OFFSET 10000000

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int a[MAX] = {0}, b[MAX] = {0};
	int x;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		a[x + OFFSET] = true;
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &x);
		b[x + OFFSET] = true;
	}
	for(int i = 0; i < MAX; i++){
		if(a[i] || b[i]) printf("%d ", i - OFFSET);
	}
	printf("\n");
	for(int i = 0; i < MAX; i++){
		if(a[i] && b[i]) printf("%d ", i - OFFSET);
	}
	printf("\n");
}

