#include <stdio.h>
int main()
{
    int n, b, sum = 0, product = 1;
    scanf("%d", &n);
    for (int i = 0; n != 0; i++)
    {
        i = n % 10;
        n = n / 10;
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            product = product * i;
        }
    }
    printf("Sum of even number %d\n", sum);
    printf("Product of odd number %d\n", product);
    return 0;
}