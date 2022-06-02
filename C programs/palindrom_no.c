#include <stdio.h>
int main()
{
    int n,sum = 0,d;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = n;i>0;i=n/10)
    {
        d = n%10;
        sum = (sum*10)+d;
    }
    if(sum==n)
    {
        printf("%d is a palindrom number",n);
    }
    else
    {
        printf("%d is not a palindrom",n);
    }
    return 0;
}