#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k, l;
    k = n + 1;
    l = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ((n*2)-1); j++)
        {
            if ((j >= (k - i)) && (j <= (l + i)))
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

    return 0;
}