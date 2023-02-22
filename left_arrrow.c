#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
for (int i = n; i != 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        printf("*");
    }
    if (i != 1)
    {
        printf("\n");
    }
    

}
for (int i = 0; i <= n; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("*");
    }
    printf("\n");
}

return 0 ;
}