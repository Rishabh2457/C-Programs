#include <stdio.h>
void main()
{   

    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter array elements : ");
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
            b=a[j][i];
            printf("%d",b);
        }
        printf("\n");
    }
}