#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int t = 1;
    while(t--){
        char s[1001];
        fgets(s, sizeof(s), stdin); 
        s[strcspn(s, "\n")] = '\0';

        for(int i = 0; s[i]; i++){
            if(islower(s[i])) printf("%c", toupper(s[i]));
            else if(isupper) printf("%c", s[i]);
        }
        printf("\n");
        for(int i = 0; s[i]; i++){
            if(isupper(s[i])) printf("%c", tolower(s[i]));
            else if(islower) printf("%c", s[i]);
        }
        printf("\n");
    }
}

