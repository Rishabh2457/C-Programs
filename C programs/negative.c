#include <stdio.h>
void main()
{
    int a[5],i;
    printf("Enter elements in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
        printf("%d ",a[i]);
    }
}