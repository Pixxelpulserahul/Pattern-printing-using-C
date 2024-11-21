#include<stdio.h>
void main()
{
    int x, y, n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for(x=n; x>0; x--)
    {
        for(y=x; y>0; y--)
        {
            printf("*");
        }
        printf("\n");
    }
}