#include<stdio.h>
int main(){
 FILE *fd;
 fd=fopen("/home/hemu2004/prime.o","r");
 if(fd==NULL)
	 printf("File is not found\n");
 else
	 printf("File opened successfully\n");
 return 0;
}
