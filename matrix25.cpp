#include <stdio.h>
#include <math.h>
#define ll long long
int main(){
    int n; scanf("%d", &n);
    int a[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 2; j++) 
            scanf("%d", &a[i][j]);
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        int dem1 = 0, dem0 = 0;
        for(int j = 0; j <= 2; j++){
            if(a[i][j] == 1) dem1++;
            else dem0++;
        }
     if(dem1 > dem0) dem++;
    }
    printf("%d\n", dem);
}

