#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char s[1001];
		gets(s)l
		int n = strlen(s);
		for(int i = 0; i < n; i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		char *word = strtok(s, " ");
		char tuvung[101][101];
		ll sotu = 0;
		while(word != NULL){
			strcpy(tuvung[sotu++], word);
			word = strtok(NULL, " ");
		}
		for(int i = 0; i < strlen(tuvung[sotu - 1]); i++){
			if(tuvung[sotu - 1][i] >= 'A' && tuvung[sotu - 1][i] <= 'Z') tuvung[sotu - 1][i] -= 32;
		}
		char date[1001];
		strcpy(date, tuvung[sotu - 1]);
		sotu--;
		printf("%s", tuvung[sotu - 1]);
		for(int i = 0; i <= sotu - 2; i++){
			if(tuvung[i][0] >= 'A' && tuvung[i][0] <= 'Z') tuvung[i][0] -= 32;
			printf("%c", tuvung[i][0]);
		}
		printf("@xyz.edu.vn\n");
		int day, month, year;
		sscanf(date, "%d/%d/%d", &day,&month, &year);
		printf("%d%d%d\n", day, month, year);
	}
}

