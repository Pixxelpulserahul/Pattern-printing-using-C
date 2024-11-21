#include<stdio.h>
void main()
{
    int x, y, z, n, r, a, b, i=1, c;
    r=0;
    printf("Enter the rows: ");
    scanf("%d", &n);

    for(x=0; x<n; x++)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }
        for(z=2*x+1; z>0; z--)
        {
            if(z%2!=0)
            {
                if((r==0) || (r==x))
                {
                    printf("1");
                }
                else
                {
                    a = x;
                    b = r;
                    i = 1;
                    c = b;

                    for(; b > 0; b--)
                    {
                        i = i * a;
                        a -= 1;
                    }

                    b = c;
                    c = 1;
                    for(; b > 0; b--)
                    {
                        c = c * b;
                    }

                    printf("%d", i / c);
                }
                r+=1;
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