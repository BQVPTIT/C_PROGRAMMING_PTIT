#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long

bool soChiahet6(char s[]){
	int n = strlen(s);
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += s[i] - '0';
	}
	if((s[n - 1] - '0') % 2 != 0 || sum % 3 != 0) return false;
	return true;
}

int main(){
	int t = 1;
	while(t--){
		char s[1001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		if(soChiahet6(s)) printf("YES\n");
		else printf("NO\n");
	}
}

