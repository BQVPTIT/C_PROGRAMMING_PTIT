#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool soDep(char s[]){
	int n = strlen(s);
	bool kogiam = false, kotang = false;
	for(int i = 1; i <= n - 1; i++){
		if(s[i] > s[i - 1]) kotang = true;
		else if(s[i] < s[i - 1]) kogiam = true;
	}
	if(kogiam && kotang) return false;
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

