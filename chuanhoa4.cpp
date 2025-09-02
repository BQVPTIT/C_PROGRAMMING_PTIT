#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long

int main(){
    char s[101];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    char *word = strtok(s, " ");
    ll sotu = 0;
    char tuvung[101][101];
    while(word != NULL){
        strcpy(tuvung[sotu++], word);
        word = strtok(NULL, " ");
    }
    bool dautien[101] = {false};
    for(int i = 0; i < sotu; i++){
        dautien[i] = true;
    }
    for(int i = 0; i <= sotu - 2; i++){
        for(int j = i + 1; j <= sotu - 1; j++){
            if(strcmp(tuvung[i], tuvung[j]) == 0){
                dautien[j] = false;
            }
        }
    }
    for(int i = 0; i <= sotu - 1; i++){
        if(dautien[i] == 1) printf("%s ", tuvung[i]);
    }
}

//mon |thcs2| hoc la mon 2tc
//|thcs2| hoc la mon 2tc hoc

