#include<stdio.h>

int main(){
	float F,C;
	
	printf("enter temperature in F:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1f F=%.1f C",F,C);
	return 0;
}
/*
Enter temperature in C: 20.5
20.5 C = 68.9 F

Enter temperature in F: 80.5
80.5 F = 26.9 C
*/
