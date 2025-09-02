#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		char s[100001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		bool xaudoixung = false;
		int n = strlen(s);
		for(int i = 0; i <= n / 2 - 1;i++){
			if(s[i] != s[n - i - 1]){
				xaudoixung = true;
				break;
			}
		}
		if(!xaudoixung) printf("YES\n");
		else printf("NO\n");
	}
}



