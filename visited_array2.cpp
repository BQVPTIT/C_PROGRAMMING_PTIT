#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[101] = {0}, b[101] = {0};
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int min = INT_MAX, max = INT_MIN;
	for(int i = 0; i < n; i++){
		if(a[i] < min) min = a[i];
		if(a[i] > max) max = a[i];
	}
	for(int i = 0; i < n; i++){
		b[a[i]]++;
	}
	int tansuatmax = 0;
	for(int gt = min; gt <= max; gt++){
		if(b[gt] > tansuatmax) tansuatmax = b[gt];
	}
	printf("%d\n", tansuatmax);
	int minNum = INT_MAX, maxNum = INT_MIN;
	for(int gt = min; gt <= max; gt++){
		if(b[gt] == tansuatmax){
			if(gt < minNum) minNum = gt;
			if(gt > maxNum) maxNum = gt;
		}
	}
	printf("%d %d\n", minNum, maxNum);
}



