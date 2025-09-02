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
		int n = strlen(s);
		if(n % 2 == 0) printf("NOT FOUND\n");
		else{
			printf("%c\n", s[n / 2]);
		}
	}
}

