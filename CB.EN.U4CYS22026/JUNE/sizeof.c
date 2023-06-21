#include<stdio.h>
struct test{
	int testvar;
	char character;
};
int main(){
	struct test t[2],t1;


	printf("%x\n",t);
	printf("%x\n",&t);
	printf("%x\n",t[0]);
	printf("%x\n",&t[0]);
	printf("%x\n",t[0].testvar);
	printf("%x\n",t[1]);
	printf("%x\n",t[1].testvar);
	printf("%d",sizeof(t));
}
