#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		ll n; scanf("%lld", &n);
		char s[10001];
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
		sprintf(s, "%lld", n);
		printf("%s\n", s);
	}
}


