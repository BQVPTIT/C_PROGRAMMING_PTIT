#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int dem = 0;
		for(int i = 0; i <= n - 2; i++){
			if(a[i] == a[i + 1]) dem++;
		}
		printf("%d\n", dem);
	}
}

