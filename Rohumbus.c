#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int l = (2*n)-1;
int k = n-1;
for (int i = 1; i < n; i++)
{
    for (int j = 1; j < l; j++)
    {
        if (i <= j && j <= i+k)
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