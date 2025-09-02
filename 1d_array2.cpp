#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	int tuyetdoi1 = abs(n1), tuyetdoi2 = abs(n2);
	if(tuyetdoi1  > tuyetdoi2) return 1;
	if(tuyetdoi1 < tuyetdoi2) return -1;
	if(tuyetdoi1 == tuyetdoi2) return 0;
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), sort);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
}


