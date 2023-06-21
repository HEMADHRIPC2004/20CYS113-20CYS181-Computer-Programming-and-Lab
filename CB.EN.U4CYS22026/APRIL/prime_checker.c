#include<stdio.h>
int main()
{ int n;
	int a=0;
	printf("Enter the number to be checked :");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Number 0 is not prime \n");
	}
	if(n==1)
	{
		printf("Number 1 is neither prime nor composite \n");
	}
	if(n==2)
	{
		printf("Number 2 is the only even prime number \n");
	}
	for(int i=2;i>1 && i<n;i++)
	{
		if(n%i==0)
		{
			a=a+1;
		}
	}
	if(a>0)
	{
	printf("%d is not a prime number \n",n);
	}
	else 
		printf("%d is a prime number \n",n);
	return 0;
}
