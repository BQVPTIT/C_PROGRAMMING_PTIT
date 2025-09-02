#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

int nt[1000001];

void sangnt(){
	for(int i = 0; i <= 1000001; i++){
		nt[i] = true;
	}
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(1000001); i++){
		if(nt[i] == true){
			for(int j = i * i; j <= 1000001; j += i){
				nt[j] = false;
			}
		}
	}
}

bool tatcacsnt(int n){
	while(n != 0){
		int d = n % 10;
		if(d != 2 && d != 3 && d != 5 && d != 7) return false;
		n /= 10;
	}
	return true;
}

int main(){
	sangnt();
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(nt[i] == 1 && tatcacsnt(i) == 1){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}

