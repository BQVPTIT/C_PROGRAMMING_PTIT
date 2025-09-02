#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long

bool laSodep(char s[]){
	int n = strlen(s);
	if(s[0] != '8' || s[n - 1] != '8') return false;
	
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	
	ll tong = 0;
	for(int i = 0; i < n; i++){
		tong += (s[i] - '0');
	}
	if(tong % 10 != 0) return false;
	return true;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char s[501];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		if(laSodep(s)) printf("YES\n");
		else printf("NO\n");
	}
}

