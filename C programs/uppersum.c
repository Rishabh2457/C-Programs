#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n][n],sum=0;
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Upper triangular matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
            sum+= a[i][j]; 
            }
        }
    }
    printf("\nSum of upper tringular matrix elememts : %d",sum);
}
