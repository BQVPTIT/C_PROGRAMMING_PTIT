#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, m; scanf("%d %d", &n, &m);
        int a[101][101] = {0}, b[101][101] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
                b[i][j] = a[i][j];
            }
        }
        int tren = 0, duoi = n - 1, trai = 0, phai = m - 1;
        while(tren <= duoi && trai <= phai){
            if(trai + 1 <= phai){
                for(int i = trai + 1; i <= phai; i++){
                    b[tren][i] = a[tren][i - 1];
                }
            }
            if(tren + 1 <= duoi){
                for(int i = tren + 1; i <= duoi; i++){
                    b[i][phai] = a[i - 1][phai];
                }
            }
            if(phai - 1 >= trai){
                for(int i = phai - 1; i >= trai; i--){
                    b[duoi][i] = a[duoi][i + 1];
                }
            }
            if(duoi - 1 >= tren){
                for(int i = duoi - 1; i >= tren; i--){
                    b[i][trai] = a[i + 1][trai];
                }
            }
            tren++; duoi--; trai++; phai--;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}


