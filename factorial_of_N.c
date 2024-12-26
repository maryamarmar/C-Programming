#include <stdio.h>
int main()
{
int N, F=1, i=1;
printf("Enter value of N:");
scanf("%d", &N);
for(i=1; i<=N; i++)
{
F = F*i;
}
printf("The factorial of N is %d. \n", F);
return 0;
}