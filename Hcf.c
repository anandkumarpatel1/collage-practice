#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    scanf("%d %d", &a, &b);
    for (i = 1, j = 1; i <= a, j <= b; i++,j++)
    {
        if (a % i == 0 && b % i == 0)
        {
           k = i;
        }
        
    }
    printf("%d",k);
    return 0;
}