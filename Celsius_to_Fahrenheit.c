#include<stdio.h>
int main()
{
float C, F;
printf("Enter temperature in Celsius:");
scanf("%f", &C);
//Formula to convert Celsius to Fahrenheit
F = (C * 9.0/5) +32;
printf("The temperature in Fahrenheit is %.2f. \n", F);
return 0;
}