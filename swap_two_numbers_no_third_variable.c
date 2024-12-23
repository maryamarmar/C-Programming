#include <stdio.h>
int main()
{
int a, b;
printf("Enter first number:");
scanf("%d", &a);
printf("Enter second number:");
scanf("%d", &b);
b = b-a;
a = b+a;
b = a-b;
printf("New value of first number is %d. \n", a);
printf("New value of second number is %d. \n", b);
return 0;
}