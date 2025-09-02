#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

bool thuannghich(int n){
	int rev = 0, tmp = n;
	while(tmp != 0){
		rev = rev * 10 + (tmp % 10);
		tmp /= 10;
	}
	if(rev == n) return true;
	else return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int dem = 0;
		if(a > b) swap(&a, &b);
		for(int i = a + 1; i <= b - 1; i++){
			if(thuannghich(i)){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}

