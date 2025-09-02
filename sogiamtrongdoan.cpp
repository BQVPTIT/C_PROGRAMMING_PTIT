#include <stdio.h>
#include <stdbool.h>

#define ll long long

bool soGiam(int n){
    if(n < 10) return true;
    int last = n % 10;
    n /= 10;
    while(n != 0){
        int first = n % 10;
        if(first <= last) return false; 
        last = first;
        n /= 10;
    }
    return true;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int dem = 0;
        for(int i = a; i <= b; i++){
            if(soGiam(i)) dem++;
        }
        printf("%d\n", dem);
    }
}

