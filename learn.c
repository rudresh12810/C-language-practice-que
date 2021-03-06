#include <stdio.h>
#include <string.h>
 
int main()
{   int i,count=0;
    char str[20];
    printf("enter the user name = ");
    scanf("%s",&str);
    
    for(i=0; str[i]!='\0';i++)
    {
        count++;
      //  printf("%c",str[i]);

    }
    printf("%d",count);
return 0;
}

