#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

int tang = 1;

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char s1[1001], s2[1001];
		scanf("%s", s1);
		scanf("%s", s2);
		int b1[26] = {0}, b2[26] = {0};
		for(int i = 0; s1[i] != '\0'; i++){
			b1[s1[i] - 'a']++;
		}
		for(int i = 0; s2[i] != '\0'; i++){
			b2[s2[i] - 'a']++;
		}
		int check = false;
		for(int i = 0; i <= 25; i++){
			if(b1[i] != b2[i]){
				check = true;
				break;
			}
		}
		if(!check){
			printf("Test %d: ", tang++);
			printf("YES\n");
		} 
		else{
			printf("Test %d: ", tang++);
			printf("NO\n");
		}
	}
}

