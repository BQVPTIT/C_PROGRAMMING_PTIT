#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	if(n1 > n2) return 1;
	if(n1 < n2) return -1;
	if(n1 == n2) return 0;
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), sort);
    int dem = 1;
    for(int i = 1; i < n; i++){
    	if(a[i] != a[i - 1]){
    		dem++;
		}
	}
	printf("%d", dem);
}


