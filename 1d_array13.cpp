#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int k; scanf("%d", &k); //chen
	for(int i = k; i < n; i++) printf("%d ", a[i]);
	for(int i = 0; i <= k - 1; i++) printf("%d ", a[i]);
}
