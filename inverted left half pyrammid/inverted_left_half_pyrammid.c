#include<stdio.h>
void main()
{
    int x, y, z, n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(x=0; x<=n-1; x++)
    {
        for(y=n-x; y>0; y--)
        {
            printf("*");
        }
        printf("\n");
        for(z=0; z<x+1; z++)
        {
            printf(" ");
        }
    }
}