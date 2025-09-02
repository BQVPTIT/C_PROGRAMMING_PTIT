#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool soDep(char s[]) {
	int n = strlen(s);
	int csdau = s[0] - '0';
	int cscuoi = s[n - 1] - '0';
	if(csdau != cscuoi * 2 && cscuoi != csdau * 2) return false;
	for(int i = 1; i <= (n - 2) / 2 + 1; i++) {
		if(s[i] != s[n - i - 1]) return false;
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		char s[10001];
		scanf("%s", s);
		if(soDep(s)) printf("YES\n");
		else printf("NO\n");
	}
}


