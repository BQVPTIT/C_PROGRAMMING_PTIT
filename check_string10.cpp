#include <stdio.h>
#include <string.h>

#define ll long long

int main(){
	int t = 1;
	while(t--){
		char s[100001];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = 0;
		int dem = strlen(s) - 1;
		printf("%d\n", dem);
	}
}


