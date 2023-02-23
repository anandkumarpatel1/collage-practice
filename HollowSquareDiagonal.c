#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (i == 1)
        {
            printf("*");
        }
        else if (j == 1 || i == j || j == n+1-i || j == n)
        {
            printf("*");
        }
        else if (i == n)
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