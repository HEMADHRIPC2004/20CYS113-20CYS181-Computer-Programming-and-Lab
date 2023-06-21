#include<stdio.h>
#define a 5
int main(){
	double t1,t2,reward;
	printf("Enter the Odometer reading before the travel:");
	scanf("%lf",&t1);
	printf("Enter the Odometer reading after the travel:");
	scanf("%lf",&t2);
	reward=(t2-t1)*a;
	if(t2>t1)
	printf("Reward for the driver:%lf rs. /n",reward);
	else if(t1=t2)
		printf("No reward for the driver");
	else
		printf("Invalid input");
	return 0;

}	
