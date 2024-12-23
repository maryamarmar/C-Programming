#include <stdio.h>
int main()
{
int number;
printf("Enter a number between 10 & 20:");
scanf("%d", &number);
if(number>10 && number<20)
printf("Valid number entered");
else
printf("Invalid number entered");
return 0;
}