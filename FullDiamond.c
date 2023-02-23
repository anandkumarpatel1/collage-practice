#include <stdio.h>
int main()
{
int n,l=0;
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    if (i > (n/2)+1)
    {
        l--;
    }
    else
    {
        l++;
    }
    for (int j = 1; j <= n; j++)
    {
        if (j >= (n/2)+2-l && j <= (n/2)+l)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}

return 0 ;
}