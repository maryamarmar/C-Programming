#include <stdio.h>
int main()
{
int P, N;
float R, SI;
printf("Enter value for P (principal):");
scanf("%d", &P);
printf("Enter value for N (time in years):");
scanf("%d", &N);
printf("Enter value for R (rate of interest):");
scanf("%f", &R);
SI = (P*N*R/100);
printf("The simple interest is %.2f. \n", SI);
return 0;
}