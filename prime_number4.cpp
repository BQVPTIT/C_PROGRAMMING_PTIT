#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool nt[10000001];

void sangnt(){
    for(int i = 0; i < 10000001; i++) nt[i] = true;
    nt[0] = nt[1] = false;
    for(int i = 2; i <= sqrt(10000001); i++) {
        if(nt[i] == true){
            for(int j = i * i; j <= 10000001; j += i){
                nt[j] = false;
            }
        }
    }
}

int main(){
	sangnt();
    int n; scanf("%d", &n);
    for(int i = 2; n >= 1; i++){
        if(nt[i]){
            printf("%d\n", i);
            n--;
        }
    }
}


