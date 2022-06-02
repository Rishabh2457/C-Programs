#include <stdio.h>
void main()
{
    int a[100],i,n,odd=0,even=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even++;
        else if(a[i]%2!=0)
        odd++;
    }
    printf("even = %d\nodd = %d",even,odd);
}