#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

bool soDep(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] == '9') return false;
	}
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	return true;
}

int main(){
	int n; scanf("%d", &n);
	char s[1001];
	int dem = 0;
	for(int i = 2; i < n; i++){
		sprintf(s, "%d", i);
		if(soDep(s)){
			printf("%d ", i);
			dem++;
		} 
	}
	printf("\n");
	printf("%d\n", dem);
}


