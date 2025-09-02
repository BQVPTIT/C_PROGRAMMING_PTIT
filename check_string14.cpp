#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool soDep(char s[]){
	int n = strlen(s);
	bool coSo6 = false;
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	for(int i = 0; i < n; i++){
		if(s[i] == '6') coSo6 = true;
	}
	if(!coSo6) return false;
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


