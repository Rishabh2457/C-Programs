#include <stdio.h>
void main()
{
    int a[100],i,sum=0;
    printf("Enter elemnts in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("%d",sum);
}