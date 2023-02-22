#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int k = n*2;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= (k-1); j++)
    {
        if (j >= i && j <= (k - i))
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