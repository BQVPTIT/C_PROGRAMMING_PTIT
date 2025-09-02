#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		int max = INT_MIN;
		int dem = 0;
		for(int i = 0; i < n; i++){
			if(a[i] > max){
				max = a[i];
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}
	
