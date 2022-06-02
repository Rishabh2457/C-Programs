#include <stdio.h>
void main()
{   
    
    int n,i,j,k;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n][n],b[n][n],mul[n][n];
    printf("Enter th elements : ");
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrices : \n");
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
        {mul[i][j]=0;
            for(k=0;k<n;k++)
            mul[i][j]+= a[i][k]*b[k][j];
        }
      
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    
}