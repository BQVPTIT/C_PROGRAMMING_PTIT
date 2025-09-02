#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		char s[201]; 
		fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = '\0';
		ll alpha = 0, digit = 0, difference = 0;
		for(int i = 0; i < strlen(s); i++){
			if(isdigit(s[i])) digit++;
			else if(isalpha(s[i])) alpha++;
			else difference++;
		}
		printf("%lld %lld %lld\n", alpha, digit, difference);
	}
}

