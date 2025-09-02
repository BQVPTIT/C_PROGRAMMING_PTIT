#include <stdio.h>
#include <math.h>
#define ll long long

int cost[] = {100, 20, 10, 5, 1};

int main() {
    int t = 1;
    while (t--) {
        int n;
        scanf("%d", &n);
        int dem = 0;
        for (int i = 0; i < 5; i++) {
            dem += n / cost[i];
            n %= cost[i];
        }
        printf("%d\n", dem);
    }
}






