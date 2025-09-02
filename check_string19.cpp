#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

bool soDep(char s[]){
	for(int i = 0; i < strlen(s); i++){
		if(nt(s[i] - '0') == 0) return false;
	}
	ll tong = 0;
	for(int i = 0; i < strlen(s); i++){
		tong += (s[i] - '0');
	}
	if(nt(tong) == 0) return false;
	return true;
}

int main(){
	int t = 1;
	while(t--){
		char s[1001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		if(soDep(s)) printf("YES\n");
		else printf("NO\n");
	}
}

