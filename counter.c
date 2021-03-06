#include<stdio.h>
int main()
{
    int i,count=0;
    char str[20];

    printf("Enter the name =  ");
    scanf("%s",&str);

    for(i=0; str[i]!='\0'; i++ )
        {
            count++;

        }
           printf("%d",count);
        
return 0;
}

