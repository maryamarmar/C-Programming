#include <stdio.h>
int main()
{
int A, B, C;
float Average;
printf("Enter values of A, B & C:");
scanf("%d %d %d", &A, &B, &C);
Average = (float)(A+B+C)/3;
printf("The average of given three number is %.2f. \n", Average);
return 0;
}