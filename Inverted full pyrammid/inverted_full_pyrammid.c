#include<stdio.h>
void main()
{
    int x, y, z, n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(x=n; x>0; x--)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }
        for(z=x*2-1; z>0; z--)
        {
            if (z%2!=0)
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