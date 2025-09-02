#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int main(){
	char s[1001];
	int b[256] = {0};
	scanf("%s", &s);
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		b[s[i]]++;
	}
	int dem = 0;
	for(char c = 'a'; c <= 'z'; c++){
		if(b[c] != 0) dem++;
	}
	printf("%d\n", dem);
}

