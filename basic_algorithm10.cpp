#include <stdio.h>
#include <stdlib.h>


#define ll long long


int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int main() {
    int t = 1;
    while (t--) {
        int n, k; scanf("%d%d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        ll so1 = 0, so2 = 0;
        if (k <= n / 2) {
            for (int i = 0; i <= k - 1; i++) so1 += a[i];
            for (int i = k; i <= n - 1; i++) so2 += a[i];
        } 
        else {
            for (int i = 0; i <= n - k - 1; i++) so1 += a[i];
            for (int i = n - k; i <= n - 1; i++) so2 += a[i];
        }
        if (so2 > so1) printf("%lld\n", so2 - so1);
        else printf("%lld\n", so1 - so2);
    }
}






