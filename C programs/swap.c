#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping : %d\n",a);
    printf("after he swaping : %d",b);
    return 0;
}