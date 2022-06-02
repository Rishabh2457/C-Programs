#include <stdio.h>
void main()
{
    int n,i,j,m;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements in array : \n");
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
            if(a[i][j]!=a[j][i])
            {
                m=0;
                break;
            }
        }
    }
    if(m==1)
    {
        printf("yes entered matrix is an symmeteric matrix .");
    }
    else 
    {
        printf("no entered matrix is not an symmetric matrix.");
    }

}