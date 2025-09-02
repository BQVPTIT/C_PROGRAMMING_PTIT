#include <stdio.h>
#include <string.h>

#define ll long long

void swap(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);
    swap(&s[0], &s[n - 1]);
    if(s[0] == '0'){
        for(int i = 1; i <= n - 1; i++){
            printf("%c", s[i]);
        }
    } 
	else{
        printf("%s", s);
    }
}


