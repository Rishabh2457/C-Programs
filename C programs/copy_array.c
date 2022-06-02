#include <stdio.h>
void main()
{
    int a[100],i,b[100],n,j;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    
}