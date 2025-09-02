#include <stdio.h>
#include <math.h>

#define ll long long

ll pascal[11][11]; 

void tamgiacpascal(ll n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i) pascal[i][j] = 1;
            else pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
}

int main(){
    ll n; scanf("%lld", &n);
    tamgiacpascal(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}


