#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int t = 1;
    while(t--){
        int a, b; scanf("%d %d", &a, &b);
        int maxDiv = (a / b) * b;
        int minDiv = (a / b + 1) * b;
        printf("%d\n", maxDiv);
        printf("%d\n", minDiv);
    }
}


