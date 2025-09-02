#include <stdio.h>
#include <string.h> 

#define ll long long

int main(){
    int t; scanf("%d", &t);
    getchar(); 
    while(t--){
        char s[201]; 
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = 0;

        ll dem = 0;
        char *word = strtok(s, " ");
        while(word != NULL){
            dem++;
            word = strtok(NULL, " ");
        }
        printf("%lld\n", dem);
    }
}


