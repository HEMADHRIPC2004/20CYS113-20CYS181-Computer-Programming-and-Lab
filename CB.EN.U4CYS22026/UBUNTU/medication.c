#include<stdio.h>
int main(){
       	double v,r;
	printf("Enter the volume of medication(in ml):");
	scanf("%lf",&v);
	printf("Enter the time taken to infuse the medicine (in minutes):");
	scanf("%lf",&r);
	double hour,rate;
	hour=r/60;
	rate=v/hour;
	printf("The volume to be infused:%lf\n",v);
	printf("Rate at which medicine is infused:%lf\n",rate);
	return 0;
}
