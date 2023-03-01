int main()
{
int n;
scanf("%d",&n);
int k = n+1;
for (int i = 0; i <= n; i++)
{
    for (int j = 0; j <= n; j++)
    {
        if (j >= (k - i))
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