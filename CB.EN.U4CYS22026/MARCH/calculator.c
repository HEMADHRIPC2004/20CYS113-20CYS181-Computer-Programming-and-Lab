#include<stdio.h>
int main()
{ int op1,op2;
	printf("Simple Calculator\n");
	printf("enter value of two operands\n");
	scanf("%d%d", &op1, &op2);
	printf("Addition: %d\n", op1 + op2);
        printf("Subtraction: %d\n", op1 - op2);
	printf("division: %d\n", op1/op2);
	printf("multiplication: %d\n",op1*op2);
	printf("Modulus: %d\n",(op1) % (op2));
	return 0;


}
