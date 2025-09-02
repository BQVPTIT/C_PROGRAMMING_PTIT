#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		char s[1001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		ll tong = 0;
		int n = strlen(s);
		for(int i = 0; i < n; i++){
			tong += (s[i] - '0');
		}
		printf("%lld\n", tong);
	}
}

