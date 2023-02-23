#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int k = 2*n-1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= k; j++)
    {
        if (i == 1 && j >= n)
        {
            printf("*");
        }
        else if (j == n+1-i || j == 2*n-i)
        {
            printf("*");
        }
        else if (i == n && j <= n)
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