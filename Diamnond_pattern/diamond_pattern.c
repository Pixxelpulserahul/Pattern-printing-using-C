#include<stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=2*i-1; k>0; k--)
        {
            if(k%2!=0)
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
    for(i=i-2; i>0; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(k=i; k>0; k--)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}