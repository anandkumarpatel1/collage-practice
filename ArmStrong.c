#include <stdio.h>
#include <math.h>
int main()
{
    int b, t = 0, sum = 0, i, l;
    printf("Enter the number\n");
    scanf("%d", &b);
    int y = b;
    for (l = 0; b != 0; l++)
    {
        i = b % 10;
        b = b / 10;
        sum = (sum * 10) + i;
    }
    for (int k = 0; sum != 0; k++)
    {
        i = sum % 10;
        sum = sum / 10;
        t = t + pow(i, l);
    }
    if (y == t)
    {
        printf("This is Arm Strong\n");
    }
    else
    {
        printf("This is Not Arm Strong\n");
    }

    return 0;
}