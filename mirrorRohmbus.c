#include <stdio.h>
int main()
{
int n,k;
scanf("%d",&n);
k = (n*2)-1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j < k ; j++)
    {
        if (j >= (n-1+i)  && j >= (n*2)-i)
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