#include <stdio.h>
int main()
{
int choice, age;
printf("Press 1 if you are a railway employee, else press 2:");
scanf("%d", &choice);
if(choice==1)
{
printf("You will get a 40 percent discount \n");
}
else if(choice == 2)
{
printf("Enter your age:");
scanf("%d", &age);
if(age<15)
{
printf("You will get a 20 percent discount \n");
}
else if(age>=15 && age<60)
{
printf("You will get a 10 percent discount \n");
}
else if(age>=60 && age<100)
{
printf("You will get a 30 percent discount \n");
}
else
{
printf("Invalid age entered \n");
}
}
return 0;
}