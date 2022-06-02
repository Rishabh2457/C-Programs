#include <stdio.h>
void main()
{
    int n,i,j,count=0,c2=0;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elemetns : \n");
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
           if(a[i][j]==0)
           {
               count++;
           }
       }
    }
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
       {
           if(a[i][j]!=0)
           {
               c2++;
           }
       }
    }
if(count>c2)
{
    printf("matrix is sparse matrix .");
}
else 
{
printf("Given matrix is not sparse matrix .");
}
}