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
	int b[1001] = {0};
	char *word = strtok(s, " ");
	char tuvung[1001][1001];
	ll sotu = 0;
	while(word != NULL){
		strcpy(tuvung[sotu++], word);
		word = strtok(NULL, " ");
	}
	for(int i = 0; i <= sotu - 1; i++){
		int dem = 1;
		if(b[i] == 0){
			for(int j = i + 1; j <= sotu - 1; j++){
				if(strcmp(tuvung[i], tuvung[j]) == 0){
					dem++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", tuvung[i], dem);
		}
	}
}

