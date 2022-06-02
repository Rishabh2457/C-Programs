#include <stdio.h>
#include <math.h>
int main()
{
    int n ,sum = 0,d;
    printf("Enter the number : ");
    scanf("%d",&n);
    int k =log10(n);
    for(int i = n;i>0;i=i/10)
    {
       d = i%10;
        sum = sum+pow(d,k+1);

    }
    if(n==sum)
    {
    printf("%d is a armstrong number",n);
    }
    else
    {  
    printf("%d is not a armstrong number",n);
    }
return 0;
}