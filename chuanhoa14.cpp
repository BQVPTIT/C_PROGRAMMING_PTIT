#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

int cmp(const void *a, const void *b){
    char *s1 = (char*)a;
    char *s2 = (char*)b;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if(len1 != len2) return len1 - len2;
    return strcmp(s1, s2);
}

int main(){
    char s[1001];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char tuvung[1001][1001];  
    ll sotu = 0;
    char *word = strtok(s, " ");
    while(word != NULL){
        strcpy(tuvung[sotu++], word);
        word = strtok(NULL, " ");
    }
    qsort(tuvung, sotu, sizeof(tuvung[0]), cmp);
    for(int i = 0; i <= sotu - 1; i++){
        printf("%s", tuvung[i]);
        if(i <= sotu - 2) printf(" ");
    }
}

