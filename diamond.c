#include <stdio.h>
int main()
{
int n,l = 0;
scanf("%d",&n);
int k = 2*n-1;
for (int i = 1; i <= k; i++)
{
    if (i > n)
    {
        l--;
    }
    else{
        l++;
    }
    for (int j = 1; j <= n; j++)
    {
        if (j >= 1 && j <= l)
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