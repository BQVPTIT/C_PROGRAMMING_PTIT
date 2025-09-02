#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long

int sort(const void *a, const void *b){
	int n1 = *(int*)a, n2 = *(int*)b;
	return n1 > n2;
}

int binary_search(int a[], int left, int right, int x){
	if(left > right) return 0;
	int mid = (left + right) / 2;
	int left_check = mid + 1, right_check = mid - 1;
	if(a[mid] == x) return 1;
	else if(a[mid] < x) return binary_search(a, left_check, right, x);
	else if(a[mid] > x) return binary_search(a, left, right_check, x);
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int x; scanf("%d", &x);
	qsort(a, n, sizeof(int), sort);
	int kq = binary_search(a, 0, n - 1, x);
	printf("%d\n", kq);
}


/* 
1 2 3 5 5 -> a[mid] = 3 < x -> dich sang phai left_check = mid + 1
5
*/


