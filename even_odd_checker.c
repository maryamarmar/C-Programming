#include <stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d", &n);
if(n%2==0)
printf("Number entered is even");
else
printf("Number entered is odd");
return 0;
}