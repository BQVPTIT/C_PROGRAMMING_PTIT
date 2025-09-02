#include <stdio.h>
#include <math.h>

#define ll long long
#define MAX 1000001

int main(){
	int n, k; scanf("%d%d", &n, &k);
	int a[MAX] = {0}, b[MAX] = {0};
	ll dem = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		int a_j = k - a[i];
		if(a_j >= 0 && a_j <= MAX){
			dem += b[a_j];
		}
		b[a[i]]++;
	}
	printf("%lld\n", dem);
}

