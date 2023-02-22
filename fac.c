#include <stdio.h>

int main()
{

    double a;
    double f = 1;
    scanf("%lf", &a);
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    printf("%lf", f);
    return 0;
}
