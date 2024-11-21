#include<stdio.h>
void main()
{
    int x, y, z, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(x=n; x>0; x--)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }
        for(z=2*x-1; z>0; z--)
        {
            if(z%2!=0)
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
    for(x=n-2; x>0; x--)
    {
        for(y=x; y>0; y--)
        {
            printf(" ");
        }
        for(z=n-x; z>0; z--)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    for(n = n*2-1; n>0; n--)
    {
        if(n%2!=0)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}