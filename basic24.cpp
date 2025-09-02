#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int xA, yA, xB, yB; scanf("%d%d%d%d", &xA, &yA, &xB, &yB);
		ll kc1 = xB - xA;
		ll kc2 = yB - yA;
		if(kc1 == kc2) printf("YES\n");
		else printf("NO\n");
	}
}

