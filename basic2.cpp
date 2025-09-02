#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int t = 1;
    while(t--) {
        char c;
        scanf("%c", &c);

        if (c >= 'A' && c <= 'Z') printf("UPPER\n");
        else if (c >= 'a' && c <= 'z') printf("LOWER\n");
        else if (c >= '0' && c <= '9') printf("DIGIT\n");
        else printf("SPECIAL\n");
    }
}




