#include <stdio.h>
int main()
{
    int r;
    char s;
    printf("Enter P for perimeter and A for area\n");
    scanf("%c", &s);
    printf("Enter the Radius\n");
    scanf("%d", &r);

    switch (s)
    {
    case 'p':
        printf("Perimeter of Circle is : %.2f \n", 2 * 3.14 * r);
        break;
    case 'P':
        printf("Perimeter of Circle is : %.2f \n", 2 * 3.14 * r);
        break;
    case 'A':
        printf("Area of Circle is : %.2f \n", 3.14 * r * r);
        break;
    case 'a':
        printf("Area of Circle is : %.2f \n", 3.14 * r * r);
        break;
    default:
    printf("please enter a valid char \n");
        break;
    }
    
    return 0;
}