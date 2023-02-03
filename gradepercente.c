#include <stdio.h>
int main()
{
int math,sci,eng,hindi,ss;
printf("Enter the marks\n");
scanf("%d",&math);
scanf("%d",&sci);
scanf("%d",&eng);
scanf("%d",&hindi);
scanf("%d",&ss);
int total = math+sci+eng+hindi+ss;
float per = (float)total/5;
if(per >= 80 && per <= 100)
{
    printf("Your percentrage is: %.2f and your grade is 'A'\n",per);
}
else if(per >= 60 && per < 80)
{
    printf("Your percentrage is: %.2f and your grade is 'B'\n",per);
}
else if(per >= 40 && per < 60)
{
    printf("Your percentrage is: %.2f and your grade is 'c'\n",per);
}
else if (per>100)
{
    printf("Please Enter a valid number\n");
}

else 
{
    printf("Your percentrage is: %.2f and you are 'fail'\n",per);
}

return 0 ;
}