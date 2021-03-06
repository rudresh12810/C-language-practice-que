#include <stdio.h>
int main()
{
    int i=1,num;

    printf("Enter the value");
    scanf("%d",&num);
    do
    {
        printf("\n %d * %d = %d",num,i,i*num);
        i++;
    }while(i <= 10);
}

