#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define ll long long


int sort(const void *a, const void *b){
	int n1 = *(char*)a, n2 = *(char*)b;
	return n1 > n2;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		char s[1001];
		sprintf(s, "%lld", n);
		qsort(s, strlen(s), sizeof(char), sort);
		int i = 0;
		while(s[i] == '0') i++;
		printf("%s\n", s + i);
	}
}


