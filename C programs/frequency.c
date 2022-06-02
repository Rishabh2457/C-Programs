#include <stdio.h>
void main()
{
    int a[100],i,count,n,freq[100],j;
    printf("Enter the size of arrray : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    for(i=0;i<n;i++)
    { if(freq[i]!=0)
        {
        printf("%d occurs %d times.\n",a[i],freq[i]);
        }
    }
}