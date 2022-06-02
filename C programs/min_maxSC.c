#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter thr second number : ");
    scanf("%d",&b);
    
    switch(b>a){
    case 0:
    printf("First number is maximum %d",a);
    break;
    case 1:
    printf("Second number is maximum %d",b);
    break;
    return 0;}
}
