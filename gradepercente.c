#include <stdio.h>
int main()
{
int math,sci,eng,hindi,ss;
float per = 0;
printf("Enter the marks\n");
scanf("%d",&math);
scanf("%d",&sci);
scanf("%d",&eng);
scanf("%d",&hindi);
scanf("%d",&ss);
int total = math+sci+eng+hindi+ss;
per = (float)total/5;
if(per >= 80 && per <= 100)
{
    printf("Your percentrage is: %f and your grade is 'A'",per);
}
else if(per >= 60 && per < 80)
{
    printf("Your percentrage is: %f and your grade is 'B'",per);
}
else if(per >= 40 && per < 60)
{
    printf("Your percentrage is: %f and your grade is 'c'",per);
}
else 
{
    printf("Your percentrage is: %f and you are 'fail'",per);
}

return 0 ;
}