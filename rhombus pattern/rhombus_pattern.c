#include<stdio.h>
void main()
{
    int x, y, z, n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for(x=n; x>0; x--)
    {
        for(y=n-x; y>0; y--)
        {
            printf(" ");
        }
        for (z = n; z > 0; z--)
        {
            printf("*");
        }
        printf("\n");   
    }
}