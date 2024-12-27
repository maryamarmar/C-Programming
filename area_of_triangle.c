#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;
float s, A;
printf("Enter values of a, b & c:");
scanf("%d %d %d", &a, &b, &c);
s = (float)(a+b+c)/2;
A = sqrt (s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is %.2f. \n", A);
return 0;
}