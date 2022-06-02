#include <stdio.h>
void main()
{
    int n,i,j,m;
    printf("ENTer the size of array : \n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements  : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    m=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i&&a[i][j]==0)
            {
                m=0;
                break;
            }
            else if(i>j&&a[i][j]!=0)
            {
                m=0;
                break;
            }
        }
    }
    if(m==1)
    {
        printf("yes");
    }
    else
    printf("no");
}