#include <stdio.h>
int main()
{
int a;
printf("Enter your marks \n");
scanf("%d",&a);
if(a >= 80 && a <= 100)
{
    printf("Your marks is %d and your grade is 'A'",a);
}
if(a >= 60 && a < 80)
{
    printf("Your marks is %d and your grade is 'B'",a);
}
if(a >= 40 && a < 60)
{
    printf("Your marks is %d and your grade is 'c'",a);
}
if(a < 40)
{
    printf("Your marks is %d and you are fail'",a);
}
return 0 ;
}