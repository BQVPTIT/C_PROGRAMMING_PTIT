#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		char s[10001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		int n = strlen(s);
		ll tong = 0;
		for(int i = 0; i < n; i++){
			if(isdigit(s[i])){
				tong += (s[i] - '0');
			}
		}
		printf("%lld\n", tong);
	}
}


