#include<stdio.h>
int main()
{printf("area of triangle\n");
	float area , base , height ;
	printf("enter value of base\n");
	scanf("%f",&base);
	printf("enter value of height\n");
	scanf("%f",&height);
	area = 0.5 * base * height;
	printf("area of triangle:%f\n",area);
	return 0;
}
