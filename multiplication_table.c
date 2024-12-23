#include <stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d", &a);
int i=1;
while(i<=10)
{
printf("%d * %d = %d \n", i, a, i*a);
i++;
}
return 0;
}