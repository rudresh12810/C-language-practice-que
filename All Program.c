	//PROGRAM OF AREA OF CIRCLE
	
/*
#include<stdio.h>
#define PI 3.14
int main()
{

float radius,circle;

	printf("enter the value of radius ");
	scanf("%f",&radius);
circle=PI*radius*radius;
	printf("the value of circle is %f",circle);	
	return 0;	
	
} /*



	// PROGRAM OF MATH 

/*
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
} */


// PROGRAM OF SWAPPING TWO NUMBER WITHOUT THIRD VARIABLE

/*
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value of A =");
	scanf("%d",&a);
	printf("Enter the value of B =");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
		printf("A is %d",a);
		printf("\nB is %d",b);	
}	*/ 


	// PROGRAM OF SWAPPING TWO NUMBER WITH THIRD VARIABLE

/*
#include<stdio.h>
int main()
{
	int a,b,T;
	
	printf("Enter the value of A = ");
	scanf("%d",&a);
	printf("Enter the value of B = ");
	scanf("%d",&b);
	T=a;
	a=b;
	b=T;
	
	printf("Value of A is = %d",a);
	printf("\nValue of B is = %d",b);
		
}		*/


	// PROGRAM OF SWAPPING THREE NUMBER WITHOUT 4th VARIABAL
	/*
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the value of A = ");
	scanf("%d",&a);
	printf("Enter the value of B = ");
	scanf("%d",&b);
	printf("Enter the value of C = ");
	scanf("%d",&c);
	a=    ;
	b=    ;
	a=    ;
	printf("value of A is = %d",a);
	printf("\nValue of b is = %d",b);
	printf("\nValue of c is = %d",c);
	}  */

	// PROGRAM OF SWAPPING THREE NUMBER WITH 4TH VARIABLE
/*	
#include<stdio.h>
int main()
{
	int a,b,c,T;
	
	printf("Enter the Value of A  = ");
	scanf("%d",&a);
	printf("Enter the Value of B  = ");
	scanf("%d",&b);
	printf("Enter the Value of C  = ");
	scanf("%d",&c);
	T=a;
	a=b;
	b=c;
	c=T;
	printf("Value of A is = %d",a);
	printf("\nValue of B is = %d",b);
	printf("\nValue of C is = %d",c);
	
}*/



	// PROGRAM OF AREA OF TRIANGULAR 
/*	
#include<stdio.h>
int main()
{
	float Height,Base,Area;
	
	printf("Enter the value of height = ");
	scanf("%f",&Height);
	printf("Enter the value of Base = ");
	scanf("%f",&Base);
	
	Area = 0.5*Height*Base;
	
	printf("The Area of Triangle is = %f",Area);
	
}	*/

	// PROGRAM OF SIMPLE INTEREST 
/*	
#include<stdio.h>
int main()
{
	float Amount,Time,Int_Rate,Int_Amount,Total_Int_Amount,Total_Amount;
	
	printf("Enter The Value of Amount ");
	scanf("\n%f",&Amount);
	printf("Enter Time Duration ");
	scanf("\n%f",&Time);
	printf("Enter Interest Rate ");
	scanf("\n%f",&Int_Rate);
	Int_Amount=(Amount*Int_Rate)/100;
	Total_Int_Amount= (Amount*Time*Int_Rate)/100;
	Total_Amount= Total_Int_Amount+Amount;
		printf("\nIntrest Amount is = %f \n",Int_Amount);
		printf("\nTotal Interest Amount Per Month is = %f \n",Total_Int_Amount);
		printf("\nTotal Amount After Adding Int is = %f \n",Total_Amount);
}	*/
								
	//PROGRAM OF MARKSHEET									
/*	
#include<stdio.h>
int main()
{
										
	float Total,English,Chemistry,Physics,Bio,Math,Division,Percentage;
	
	printf("Enter the marks of English = ");
	scanf("%f",&English);	
	printf("Enter the marks of Chemistry = ");
	scanf("%f",&Chemistry);
	printf("Enter the marks of Physics = ");
	scanf("%f",&Physics);
	printf("Enter the marks of Bio = ");
	scanf("%f",&Bio);
	printf("Enter the marks of Math = ");
	scanf("%f",&Math);
	Total=English+Chemistry+Physics+Bio+Math;
	Percentage=(Total/500)*100;
	
	printf("Total is = %f",Total);
	printf("\nPercentage is = %f",Percentage);
	
	if(Percentage>=75)
		printf("\nDistricion");
	else if(Percentage>=60)
		printf("\nFirst Division");
	else if(Percentage>=45)
		printf("\nSecond Division");
	else if(Percentage>=36)
		printf("\nThird Division");
	else
		("Fail");
	
} /*
















