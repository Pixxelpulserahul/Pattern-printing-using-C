#include<stdio.h>
void main()
{
    int x, y, z, n, r;
    r=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(x=1; x<=n; x++)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }


        for(z=2*x-1; z>0; z--)
        {
            if(x==n)
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
            else if((z==1) || (r==0))
            {
                printf("*");
                r=1;
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