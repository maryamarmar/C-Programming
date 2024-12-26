#include <stdio.h>
int main()
{
int count, sum;
sum = 0;
for(count=1; count<=5; count++)
{
sum = sum+count;
}
printf("Sum of first five natural numbers is %d. \n", sum);
return 0;
}