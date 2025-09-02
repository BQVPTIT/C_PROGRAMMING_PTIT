#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>

#define ll long long

int main(){
		char s[1001];
		scanf("%s", &s);
		int n = strlen(s);
		ll max = INT_MIN;
		int i = 0;
		while(i <= n - 1){
			if(isdigit(s[i])){
				ll num = 0;
				while(i < n && isdigit(s[i])){
					num = num * 10 + (s[i] - '0');
					i++;
				}
				if(num > max) max = num;
			}
			else i++;
		}
		printf("%lld\n", max);
}

