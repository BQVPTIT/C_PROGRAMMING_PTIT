#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define ll long long

bool laSodep(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1] || (s[i] - '0') % 2 == 1) return false;
    }
    return true;
}

int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        char s[501];
        scanf("%s", &s);
        if(laSodep(s)) printf("YES\n");
        else printf("NO\n");
    }
}


