#include <stdio.h>
void main()
{
    int a[100],n,i,e;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n++;
    printf("Enter element to insert : ");
    scanf("%d",&e);
    a[n-1]=e;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}