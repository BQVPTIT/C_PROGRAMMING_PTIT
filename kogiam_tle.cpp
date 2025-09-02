#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool soKogiam(int n){
    if(n < 10) return true;
    int last = n % 10;
    n /= 10;
    while(n != 0){
        int first = n % 10;
        if(first > last) return false;
        last = first;
        n /= 10;
    }
    return true;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){ 
        int n; scanf("%d", &n);
        int start = 1, end = 1;
        for(int i = 0; i < n; i++){
            start *= 10;
            end *= 10;
        }
        start /= 10;
        for(int i = start; i < end; i++){
            if(soKogiam(i)) printf("%d ", i);
        }
        printf("\n");
    }
}


