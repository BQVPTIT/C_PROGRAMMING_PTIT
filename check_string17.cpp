#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool thuanNghichle(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1] || (s[i] - '0') % 2 == 0) return false;
	}
	ll tong = 0;
	for(int i = 0; i < n; i++){
		tong += (s[i] - '0');
	}
	if(tong % 2 == 0) return false;
	return true;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char s[100001];
		scanf("%s", &s);
		if(thuanNghichle(s)) printf("YES\n");
		else printf("NO\n");
	}
}

