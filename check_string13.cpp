#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

bool laSodep(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1] || nt(s[i] - '0') == 0) return false;
	}
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

