// Evaluate the expression 3*x/y - z+k where x = 2, y = 3, z = 3, & k = 1, & provide the final result.
#include <stdio.h>
int main()
{
int x=2, y=3, z=3, k=1;
float result = 3*x/y - z+k;
printf("The final result is %.2f. \n", result);
return 0;
}