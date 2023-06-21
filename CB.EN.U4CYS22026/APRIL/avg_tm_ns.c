#include<stdio.h>
int main()
{ double tm/* total marks */ ; 
	int ns/* number of students */ ;
	int avg/* average */ ;
	printf("Enter the number of students :");
	scanf("%d",&ns);
	printf("Enter the total marks :");
	scanf("%lf",&tm);
	avg=(tm/ns);
	printf("Average =%d",avg);
	return 0;

}
