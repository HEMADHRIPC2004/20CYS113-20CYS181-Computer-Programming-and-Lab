#include<stdio.h>
int main()
{
    double bill;
    double sum[5];
    double readings[5];
    char name[25];
    int EBno[5];
    
    for(int i=0;i<5;i++)
    {       
            printf("Enter the name of the house owner %d : ",i+1);
	    scanf("%s",&name[i]);      
            printf("Enter the EBno of the house owner %d : ",i+1);
	    scanf("%d",&EBno[i]);      
    	    printf("Enter the units consumed of the house owner %d: ",i+1);
	    scanf("%lf",&readings[i]);
    }
    
    for(int i=0;i<5;i++)
	    //Bill is calculated here
    {
        bill=0;
	 //Values must be positive
        if(readings[i]<0)
	{
            printf("Invalid Input, Readings can't be Negative\n");
        }

	else if(readings[i]<=100 && readings[i]>=0)
	{
            bill=0;
        }
        else if(readings[i]>100 && readings[i]<=400)
	{
            bill+=(readings[i]-100)*2.25;
        }
        else if(readings[i]>400 && readings[i]<=500)
	{
            bill=675+((readings[i]-400)*4.50);
        }
        else if(readings[i]>500 && readings[i]<=600)
	{
            bill=1125+(readings[i]-500)*6;
        }
        else if(readings[i]>600)
	{
            bill=1725+(readings[i]-600)*8;
        }
        sum[i]=bill;
    }
     //Final output is printed here
    for(int x=0;x<5;x++)
    
     {
	    printf("%.2f INR\n",sum[x]);
     }
 
    return 0;
}
