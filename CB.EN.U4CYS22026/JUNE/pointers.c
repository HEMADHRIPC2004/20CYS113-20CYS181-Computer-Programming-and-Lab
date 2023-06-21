#include<stdio.h>
int main(){
	int a,*b;
	a=72;
	b=&a;
	printf("%d\n",a);
        printf("%x\n",&a);
        printf("%x\n",b);
        printf("%d\n",*b);
        return 0
}
