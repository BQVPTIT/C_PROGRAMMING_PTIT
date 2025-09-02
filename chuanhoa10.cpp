#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
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
	for(int i = 0; i <= sotu - 2; i++){
		printf("%c", tuvung[i][0]);
	}
	printf("%s", tuvung[sotu - 1]);
	printf("@ptit.edu.vn\n");
}



