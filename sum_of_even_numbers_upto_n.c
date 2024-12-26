#include <stdio.h>
int main()
{
int n, count, sum;
printf("Enter value of n:");
scanf("%d", &n);
count = 0;
sum = 0;
while(count<=n)
{
sum = sum+count;
count = count+2;
}
printf("Sum of even numbers upto n is %d.", sum);
return 0;
}