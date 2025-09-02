#include <stdio.h>
#include <math.h>

#define ll long long

ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int dem = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(ucln(a[i], a[j]) == 1) dem++;
		}
	}
	printf("%d\n", dem);
}

