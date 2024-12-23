#include <stdio.h>
#define PI 3.14
int main()
{
int s, l, b, r;
printf("AREA OF SQUARE \n");
printf("Enter side of square:");
scanf("%d", &s);
printf("The area of square is %d. \n", s*s);
printf("AREA OF RECTANGLE \n");
printf("Enter length of rectangle:");
scanf("%d", &l);
printf("Enter breadth of rectangle:");
scanf("%d", &b);
printf("The area of rectangle is %d. \n", l*b);
printf("AREA OF CIRCLE \n");
printf("Enter radius of circle:");
scanf("%d", &r);
printf("The area of circle is %.2f. \n", PI*r*r);
return 0;
}