#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements in array : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}