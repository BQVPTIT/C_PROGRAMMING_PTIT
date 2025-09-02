#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char s[1001];
		gets(s);
		int n = strlen(s);
		for(int i = 0; i < n; i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		char *word = strtok(s, " ");
		char tuvung[101][101];
		ll sotu = 0; // chi so tu 1 den n
		while(word != NULL){
			strcpy(tuvung[sotu++], word);
			word = strtok(NULL, " ");
		}
		for(int i = 0; i <= sotu - 1; i++){
			if(tuvung[i][0] >= 'a' && tuvung[i][0] <= 'z') tuvung[i][0] -= 32;
			printf("%s", tuvung[i]);
			if(i != sotu - 1) printf(" ");
		}
		printf("\n");
	}
}

