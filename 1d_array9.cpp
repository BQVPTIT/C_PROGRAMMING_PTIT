#include <stdio.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
    int n1 = *(int*)a, n2 = *(int*)b;
    return n1 > n2;
  }

int main(){
    int n; 
    scanf("%d", &n);
    int a[n], le[n], chan[n], kq[n];
    int ptle = 0, ptchan = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) chan[ptchan++] = a[i];
        else le[ptle++] = a[i];
    }

    qsort(chan, ptchan, sizeof(int), sort);
    qsort(le, ptle, sizeof(int), sort);
    for(int i = 0; i < ptchan; i++) kq[i] = chan[i];
    for(int i = 0; i < ptle; i++) kq[i + ptchan] = le[i];
    for(int i = 0; i < n; i++) printf("%d ", kq[i]);
}


