#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define ll long long

bool soDep(char s[]){
    int n = strlen(s);
    for (int i = 1; i <= n - 1; i++) {
        int so1 = s[i] - '0';
        int so2 = s[i - 1] - '0';
        if(abs(so1 - so2) != 1) return false;
    }
    return true;
}

int main(){
    char s[1001];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 
    if (soDep(s)) printf("YES\n");
    else printf("NO\n");
}

