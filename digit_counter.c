#include <stdio.h>
int main()
{
int n, i=0;
printf("Enter a number:");
scanf("%d", &n);
//Check if the number is zero
if(n == 0)
{
i = 1;
}
else
{
//Non zero numbers
while(n>0)
{
n = n/10;
i++;
}
}
printf("Number has %d digits. \n", i);
}