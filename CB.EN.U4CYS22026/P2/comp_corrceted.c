#include<stdio.h>
struct compno{
    int real, imag;
}a,b,c;

int main(){
    scanf("%d %d %d",&a.real, &b.real, &c.real);
    scanf("%d %d %d",&a.imag, &b.imag, &c.imag);
     printf("%d + i%d\n",((a.real * b.real)-(a.imag * b.imag)),((a.real * b.imag)+(a.imag * b.real)));

  

    return 0;
}
