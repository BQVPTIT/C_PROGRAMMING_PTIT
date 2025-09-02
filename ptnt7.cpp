#include <stdio.h>
#include <math.h>

#define ll long long

void ptnt(int n, int k){
	int demk = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				demk++;
				if(demk == k) printf("%d ", i);
				n /= i;
			}
		}
	}
	if(n >= 2){
		demk++;
		if(demk == k) printf("%d ", n);
	}
	if(demk < k) printf("-1\n");
}

int main(){
	int n, k; scanf("%d%d", &n, &k);
	ptnt(n, k);
	printf("\n");
}

