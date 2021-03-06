#include <stdio.h>
int main()
{
	int d1,d2,d3,d4,temp,max,num;

	printf("Enter your digit : ");
	scanf("%d",num);

	d1 = num % 10;
	printf("------------>%d",d1);
	temp = num / 10;
	printf("------------>%d\n",temp);

	d2 = temp % 10;
	printf("------------>%d\n",d2);
	temp = temp / 10;
	printf("------------>%d\n",temp);

	d3 = temp % 10;
	printf("------------>%d\n",d3);
	temp = temp / 10;
	printf("------------>%d\n",temp);

	d4 = temp % 10;
	printf("------------>%d\n",d4);
	temp = temp % 10;
	printf("------------>%d\n",temp);
	
	
/*	max = d1;
	if (d2 > max){
		max = d2;
	}
	
	if (d3 > max){
		max = d3;
	}

	if (d4 > max){
		max = d4;
	}
	printf("Max = %d ", max);		*/


	return 0;
}



