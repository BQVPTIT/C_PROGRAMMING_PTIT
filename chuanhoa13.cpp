#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


#define ll long long


bool thuannghich(char s[]){
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++){
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}


int cmp(const void *a, const void *b){
    return strcmp((char*)a, (char*)b);
}


int main(){
    char s[1001];
    fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
    char tuvung[1001][1001];  
    ll sotu = 0;
    char *word = strtok(s, " ");
    while(word != NULL){
        if(thuannghich(word)){
            strcpy(tuvung[sotu++], word);
        }
        word = strtok(NULL, " ");
    }
    qsort(tuvung, sotu, sizeof(tuvung[0]), cmp);
    for(int i = 0; i <= sotu - 1; i++){
        printf("%s", tuvung[i]);
        if(i <= sotu - 2) printf(" ");
    }
}







