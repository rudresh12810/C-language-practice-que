#include<stdio.h>
int main()
{
	int a,b,add,sub,multi,division;
	
	printf("enter the value of A");
	scanf("%d",&a);
	printf("Enter the value of B");
	scanf("%d",&b);
	add=a*b;
	sub=a-b;
	multi=a*b;
	division=a*b;
	printf("add is %d",add);
	printf("\nsub is %d",sub);
	printf("\nmulti is %d",multi);
	printf("\ndivision is %d",division);
	
	return 0;
}