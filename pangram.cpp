#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define ll long long

bool pangram(char s[]){
	int n = strlen(s);
	bool used[26] = {false};
	for(int i = 0; i < n; i++){
		if(isalpha(s[i])){
			used[toupper(s[i]) - 'A'] = true;
		}
	}
	for(int i = 0; i <= 25; i++){
		if(used[i] == 0) return false;
	}
	return true;
}

int main(){
	int t = 1;
	while(t--){
		char s[100001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		if(pangram(s)) printf("YES\n");
		else printf("NO\n");
	}
}

