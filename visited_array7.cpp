#include <stdio.h>
#include <math.h>

#define ll long long

int tang = 1;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[100001] = {0}, b[100001] = {0};
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++){
	    		b[a[i]]++;
		}
		printf("Test %d:\n", tang++);
		for(int i = 0; i < n; i++){
			if(b[a[i]] >= 1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
	}
}

