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
}