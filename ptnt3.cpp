#include <stdio.h>
#include <math.h>

#define ll long long

int tang = 1;

void ptnt(int n){
    printf("Test %d:", tang++);
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        if(n % i == 0){
        	while(n % i == 0){
            	mu++;
            	n /= i;
        	}
		}
        if(mu >= 1){
            printf(" %d(%d)", i, mu);
        }
    }
    if(n >= 2) printf(" %d(1)", n);
    printf("\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; 
        scanf("%d", &n);
        ptnt(n);
    }
}






