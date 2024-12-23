#include <stdio.h>
#define PI 3.14
int main()
{
int s, r, h;
printf("VOLUME OF CUBE \n");
printf("Enter side of cube:");
scanf("%d", &s);
printf("The volume of cube is %d. \n", s*s*s);
printf("VOLUME OF SPHERE \n");
printf("Enter radius of sphere:");
scanf("%d", &r);
printf("The volume of sphere is %.2f. \n", (4.0/3.0)*PI*r*r*r);
printf("VOLUME OF CYLINDER \n");
printf("Enter radius of cylinder:");
scanf("%d", &r);
printf("Enter height of cylinder:");
scanf("%d", &h);
printf("The volume of cylinder is %.2f. \n", PI*r*r*h);
return 0;
}