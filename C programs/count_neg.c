#include <stdio.h>
void main()
{
    int a[100],i,n,neg=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
        neg++;
        }
    }
    printf("count of negative : %d",neg);
}