#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
    char s1[101], s2[101];
    gets(s1);
    scanf("%s", s2);
    char *word = strtok(s1, " ");
    char tuvung[101][101];
    ll sotu = 0;
    while(word != NULL){
        strcpy(tuvung[sotu++], word);
        word = strtok(NULL, " ");
    }
    for(int i = 0; i <= sotu - 1; i++){
    	if(strcmp(tuvung[i], s2) != 0) printf("%s ", tuvung[i]);
	}
}

