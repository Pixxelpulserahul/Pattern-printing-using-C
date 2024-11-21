#include<stdio.h>
void main()
{
    int x, y, z, n;
    printf("Enter rows: ");
    scanf("%d", &n);
    z=1;
    for(x=1; x<=n; x++)
    {
        for(y=x; y>0; y--)
        {
            printf("%d", z);
            z++;
        }
        printf("\n");
    }
}