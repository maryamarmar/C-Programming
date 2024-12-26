#include <stdio.h>
int main()
{
int i, sum;
sum = 0;
for(i=1; i<101; i++)
{
sum = sum+i;
}
printf("Sum of integers from 1 to 100 is %d. \n", sum);
return 0;
}