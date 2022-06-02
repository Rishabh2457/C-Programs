#include <stdio.h>
void main()
{   int n,m;
    
    int i,j;
    
    printf("Enter the size of array : ");
    scanf("%d%d",&n,&m);
    int a[n][m];
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
    int s;
    printf("Enter the number to multipy : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           a[i][j]= s*a[i][j];
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
    
}