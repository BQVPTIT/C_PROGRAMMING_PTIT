#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

int main(){
	char s[1001];
	scanf("%s", &s);
	int tuansuat[1001] = {0};
	int daIn[1001] = {0};
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		int nt = s[i] - '0';
		if(nt == 2 || nt == 3 || nt == 5 || nt == 7) tuansuat[nt]++;
	}
	for(int i = 0; i < n; i++){
		int nt = s[i] - '0';
		if((nt == 2 || nt == 3 || nt == 5 || nt == 7) && daIn[nt] == 0){
			printf("%d %d\n", nt, tuansuat[nt]);
			daIn[nt] = true;
		}
	}
}

