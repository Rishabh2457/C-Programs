#include <stdio.h>
void main()
{   int n,m;
    
    int sum=0,i,j;
    
    printf("Enter the size of array : ");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("Enter th elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrices : \n");
    for(i=0;i<n;i++)
    { 
        for(j=0;j<m;j++)
        {
            sum = a[i][j]+b[i][j];
            printf("%d ",sum);
            sum=0;
        }
        printf("\n");      
    }
    printf("sun=btraction of two matrix : \n");
    or(i=0;i<n;i++)
    { 
        for(j=0;j<m;j++)
        {
            sum = a[i][j]-b[i][j];
            printf("%d ",sum);
            sum=0;
        }
        printf("\n");  
        
    }
}