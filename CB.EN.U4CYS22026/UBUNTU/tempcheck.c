#include<stdio.h>
int main()
{ double t,T;
	printf("Enter the time elapsed:");
	scanf("%lf",&t);
	T=(4*t*t)/((2*t)+2)-20;
	printf("Temperature recorded:%lf",T);
	return 0;
}
