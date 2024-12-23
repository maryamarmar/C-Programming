#include <stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d", &n);
if (n<0)
printf("Number entered is negative");
else if (n>0)
printf("Number entered is positive");
else
printf("Number entered is zero");
return 0;
}