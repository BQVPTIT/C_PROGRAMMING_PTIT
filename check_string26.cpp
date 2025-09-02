#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

#define ll long long

bool soKogiam(char s[]){
	int n = strlen(s);
	for(int i = 1; i <= n - 1; i++){
		if(s[i] < s[i - 1]) return false;
	}
	return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[100001];
		scanf("%s", &s);
		if(soKogiam(s)) printf("YES\n");
		else printf("NO\n");
	}
}

