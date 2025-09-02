#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main(){
	char date[1001];
	gets(date);
	int day, month, year;
	sscanf(date, "%d/%d/%d", &day, &month, &year);
	printf("%02d/%02d/%04d\n", day, month, year);
}


