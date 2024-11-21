#include<stdio.h>
void main()
{
    int x, y, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (x=n; x>0; x--)
    {
        for(y=n; y>0; y--)
        {
            if(y==n || y==1 || x==n || x==1)
            {
                printf("*");
                printf(" ");
            }
            else
            {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    
}