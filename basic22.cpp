#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	double a, b; scanf("%lf %lf", &a, &b);
	if(a == 0){
		if(b != 0) printf("Vo nghiem\n");
		else printf("Vo so nghiem\n");
	}
	else{
		double kq = - b / a;
		printf("%.2lf", kq);
	}
}

