#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool soDep(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	bool chua6 = false;
	for(int i = 0; i < n; i++){
		if(s[i] == '6'){
			chua6 = true;
			break;
		} 
	}
	if(chua6 == false) return false;
	ll tong = 0;
	for(int i = 0; i < n; i++){
		tong += (s[i] - '0');
	}
	if(tong % 10 != 8) return false;
	return true;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	if(a > b) swap(&a, &b);
	char s[101];
	for(int i = a; i <= b; i++){
		sprintf(s, "%d", i);
		if(soDep(s)) printf("%d ", i);
	}
}

