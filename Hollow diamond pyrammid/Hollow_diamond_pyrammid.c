#include<stdio.h>
void main()
{
    int x, y, z, n, r;
    r=0;
    printf("Enter rows: ");
    scanf("%d", &n);
    for(x=1; x<=n; x++)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }
        for(z=x*2-1; z>0; z--)
        {
            if((z==1) || (r==0))
            {
                if(z%2!=0)
                {
                    printf("*");
                    r=1;
                }
            }
            else
            {
                printf(" ");
            }
        }
        r=0;
        printf("\n");
    }
    for(x=1; x<=n-1; x++)
    {   
        for(y=x; y>0; y--)
        {
            printf(" ");
        }
        for(z=(n-x)*2-1; z>0; z--)
        {   
            if((z==1) || (r==0))
            {
                if(z%2!=0)
                {
                    printf("*");
                    r=1;
                }
            }
            else
            {
                printf(" ");
            } 
        }
        r=0;
        printf("\n");
    }
}