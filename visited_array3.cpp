#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[101] = {0}, b[101] = {0};
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++){
	    b[a[i]]++;
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] >= 2){
			dem++;
		}
	}
	printf("%d\n", dem / 2);
	for(int i = 0; i < n; i++){
		if(b[a[i]] >= 2){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
}


