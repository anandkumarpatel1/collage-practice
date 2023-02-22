#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int k = (n*2)-1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= k; j++)
    {
        if (i == 1 && j >= n+1-i && j <= (n*2)-1)
        {
            printf("*");
        }
        else if (j == (n + 1-i) || j == (n*2)-1)
        {
            printf("*");
        }
        else if (i == n && j >= n+1-i && j <= (n*2)-1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        
        
    }
    printf("\n");
}

return 0 ;
}