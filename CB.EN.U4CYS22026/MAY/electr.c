#include<stdio.h>

void main()
{
	char cons_name[5][30];
	int eb_no[5], no_of_units[5], eb_no_check, check=0;
	for (int count=1; count<6; count++)
	{
		printf("Enter name %d \n", count);
		scanf("%s", &cons_name[count-1]);
		printf("Enter number %d \n", count);
		scanf("%d", &eb_no[count-1]);
		printf("Enter units %d \n", count);
		scanf("%d", &no_of_units[count-1]);
		
	}
	printf("Enter Eb number");
	scanf("%d", &eb_no_check);
	for (int count=0; count<5; count++)
	{
		if (eb_no[count]==eb_no_check)
		{
			eb_no_check = count;
			check=1;
			break;
		}
	}
	if (check!=1)
	{
		printf("not found");
	}
	else
	{
		if (no_of_units <= 100)
		printf("The bill for Eb No. %d and name %s is INR 0.00/-",eb_no[num],cons_name[num]);
		if (no_of_units > 100 && no_of_units <= 400)
		printf("The bill for Eb No. %d and name %s is INR %f/-",eb_no[num], cons_name[num], no_of_units[eb_no_check]*2.25);
		if (no_of_units > 400 && no_of_units <= 500)
		printf("The bill for Eb No. %d and name %s is INR %f/-",eb_no[num], cons_name[num], no_of_units[eb_no_check]*4.50);
		if (no_of_units > 500 && no_of_units <= 600)
		printf("The bill for Eb No. %d and name %s is INR %f/-",eb_no[num], cons_name[num], no_of_units[eb_no_check]*6);
		if (no_of_units > 600)
		printf("The bill for Eb No. %d and name %s is INR %f/-",eb_no[num], cons_name[num], no_of_units[eb_no_check]*8);
	}
	printf("\n");
}
