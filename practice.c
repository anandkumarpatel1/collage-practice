#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum = 0, count = 0, r;
    printf("enter a no.:\n");
    scanf("%d", &n);
    i = n;
    for (i != 0; i > 0; count++)
    {
        i = i / 10;
    }
    printf("the no. of digits in your given number is:%d\n", count);
    while (i > 0)
    {
        r = i % 10;
        sum = sum + pow(r, count);
        i = i / 10;
    }
    if (sum == n)
    {
        printf("it is an armstrong number\n");
    }
    else
    {
        printf("it is not an armstrong number\n");
    }
    return 0;
}