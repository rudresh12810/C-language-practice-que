#include <stdio.h>
int main()
{
  float fahrenheit, celsius;
  printf("Enter the degree of celsius you want to convert into fahrenheit = ");
  scanf("%f", &celsius);
  printf("Enter the degree of fahrenheit you want to convert into celsius = ");
  scanf("%f", &fahrenheit);
  //fahrenheit = (celsius * 9 / 5) + 32;
  celsius = (fahrenheit - 32) * 5 / 9;

  printf("fahrenheit = %f", fahrenheit);
  printf("\n celsius = %f", celsius);
} 




