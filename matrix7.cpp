#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= i) a[i][j] = 0;   
            else a[i][j] = j - i;   // cột 4 - hàng 1 = giá trị 3    
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}




