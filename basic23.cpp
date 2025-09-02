#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	if(delta < 0) printf("NO\n");
	else if(delta == 0){
		double nghiemkep = -b / (2 * a);
		printf("%.2lf", nghiemkep);
		}
	else if(delta > 0){
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		printf("%.2lf %.2lf", x1, x2);
	}
}

