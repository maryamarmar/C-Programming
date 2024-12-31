#include <stdio.h>
int main() 
{
int n;
printf("Enter a number:");
scanf("%d", &n);
printf("The reverse is:");
if(n==0) 
{
printf("0");
}
else 
{
while(n>0) 
{
printf("%d", n%10);  
n = n/10;           
}
}
return 0;
}