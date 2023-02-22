#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int k = n+1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (j >= i )
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");
    
}
for (int i = 2; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (j >= k - i)
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