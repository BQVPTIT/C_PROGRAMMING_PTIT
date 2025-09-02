#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
    int t = 1;
    while(t--){
        char c; scanf("%c", &c);
        if(c >= 'A' && c <= 'Z') c = c + 32;
        if(c == 'z') c = 'a';
        else c++;
        printf("%c\n", c);
    }
}

