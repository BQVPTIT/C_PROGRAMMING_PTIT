#include <stdio.h>
#include <math.h>
#define ll long long
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, m; scanf("%d %d", &n, &m);
        int a[101][101] = {0}, b[101][101] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) 
                scanf("%d", &a[i][j]);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    for(int k = 0; k < n; k++) b[k][j] = 1;
                    for(int k = 0; k < m; k++) b[i][k] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }
}


