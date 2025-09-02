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
		ll sotu = 0; // so tu chi so tu 1 den n
		while(word != NULL){
			strcpy(tuvung[sotu++], word);
			word = strtok(NULL, " ");
		}
		for(int i = 1; i <= sotu - 1; i++){
			if(tuvung[i][0] >= 'a' && tuvung[i][0] <= 'z') tuvung[i][0] -= 32;
			printf("%s", tuvung[i]);
			if(i != sotu - 1) printf(" ");
		}
		printf(", ");
		for(int i = 0; i < strlen(tuvung[0]); i++){
			if(tuvung[0][i] >= 'a' && tuvung[0][i] <= 'z') tuvung[0][i] -= 32;
		}
		printf("%s", tuvung[0]);
		printf("\n");
	}
}

