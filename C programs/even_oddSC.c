#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:
        printf("Even");
        break;
        default:
        printf("Odd");
        return 0;
    }
}