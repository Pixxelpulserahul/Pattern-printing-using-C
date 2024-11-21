#include<stdio.h>
void main()
{
    int x, y, z, n, r;
    printf("Enter rows: ");
    scanf("%d", &n);
    r=0;
    for(x=0; x<=n-1; x++)
    {
        for(y=x; y>0; y--)
        {
            printf(" ");
        }
        for(z=(n-x)*2-1; z>0; z--)
        {
            if((x==0)||(x==n-1))
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
            else
            {
                if((r==0)||(z==1))
                {
                    printf("*");
                    r=1;
                }
                else
                {
                    printf(" ");
                }
            }            
        }
        r=0;
        printf("\n");
    }
}