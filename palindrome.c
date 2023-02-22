#include <stdio.h>
int main()
{
    int b, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &b);
    int v = b;
    for (int i = 0; b != 0; i++)
    {
        i = b % 10;
        b = b / 10;
        sum = (sum * 10) + i;
    }
    if (sum == v)
    {
        printf("this is palindrome");
    }
    else
    {
        printf("this is not palindrome");
    }

    return 0;
}