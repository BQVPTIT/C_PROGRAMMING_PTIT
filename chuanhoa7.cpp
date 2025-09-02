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
	ll sotu = 0; // chi so i tu 1 den n
	while(word != NULL){
		strcpy(tuvung[sotu++], word);
		word = strtok(NULL, " ");
	}
	// Mau 1: Le Thi Hong, NHUNG
	// Le Thi Hong,
	for(int i = 0; i <= sotu - 2; i++){
		if(tuvung[i][0] >= 'a' && tuvung[i][0] <= 'z') tuvung[i][0] -= 32;
		printf("%s", tuvung[i]);
		if(i != sotu - 2) printf(" ");
	}
	printf(", ");
	// NHUNG = tuvung[sotu - 1]
	for(int i = 0; i < strlen(tuvung[sotu - 1]); i++){
		if(tuvung[sotu - 1][i] >= 'a' && tuvung[sotu - 1][i] <= 'z') tuvung[sotu - 1][i] -= 32;
	}
	printf("%s", tuvung[sotu - 1]);
	printf("\n");
	// Mau 2: NHUNG, Le Thi Hong
	// NHUNG,
	printf("%s", tuvung[sotu - 1]);
	printf(", ");
	// Le Thi Hong
	for(int i = 0; i <= sotu - 2; i++){
		if(tuvung[i][0] >= 'a' && tuvung[i][0] <= 'z') tuvung[i][0] -= 32;
		printf("%s", tuvung[i]);
		if(i != sotu - 2) printf(" ");
	}
	printf("\n");
}


