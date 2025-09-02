#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int chan = 0, le = 0, tongcacso = 0;
    while(scanf("%d", &x) == 1){
        if(x % 2 == 0) chan++;
        else le++;
        tongcacso++;
    }
    if((tongcacso % 2 == 0 && chan > le) || (tongcacso % 2 == 1 && le > chan)) printf("YES\n");
    else printf("NO\n");
}

