#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define ll long long

bool check_la_so(char s[]){
	for(int i = 0; i < strlen(s); i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}

bool uu_the_chan_le(char s[]){
	int chan = 0, le = 0;
	for(int i = 0; i < strlen(s); i++){
		if((s[i] - '0') % 2 == 0) chan++;
		else le++;
	}
	if((chan % 2 == 0 && chan > le) || (le % 2 != 0 && le > chan)) return true;
	return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[1001];
		scanf("%s", s);
		if(check_la_so(s) == false) printf("INVALID\n");
		else{
			if(uu_the_chan_le(s)) printf("YES\n");
			else printf("NO\n");
		}
	}
}
