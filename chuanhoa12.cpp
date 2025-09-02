#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

int tangdan(const void *a, const void *b){
    return strcmp((char *)a, (char *)b);
}

int giamdan(const void *a, const void *b){
    return strcmp((char *)b, (char *)a);
}

int main(){
    char s[10001];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  
    char *word = strtok(s, " ");
    char tuvung[1000][1001];  
    ll sotu = 0;
    while(word != NULL){
        strcpy(tuvung[sotu++], word);
        word = strtok(NULL, " ");
    }
    qsort(tuvung, sotu, sizeof(tuvung[0]), tangdan);
    for (int i = 0; i <= sotu - 1; i++){
        printf("%s", tuvung[i]);
        if (i <= sotu - 2) printf(" ");
    }
    printf("\n");
    qsort(tuvung, sotu, sizeof(tuvung[0]), giamdan);
    for(int i = 0; i <= sotu - 1; i++){
        printf("%s", tuvung[i]);
        if(i <= sotu - 2) printf(" ");
    }
}

