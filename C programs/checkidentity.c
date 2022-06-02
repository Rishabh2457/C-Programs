#include <stdio.h>
void main()
{
    int n,i,j,m;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

m=0;
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j&&a[i][j]!=1)
            {
                m=1;
                break;
            }
            else if(i!=j&&a[i][j]!=0)
            {
                m=1;
                break;
            }
        }
    }
if(m==0)
{    printf("Entered Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("yes");
}
else
{
     printf("Entered Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("no");

}  
}