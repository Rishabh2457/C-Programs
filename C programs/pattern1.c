#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i= 1 ;i<=num;i++)
    {
        for(int j =i;j>0;j--)
         {
             printf("*");
         }
         printf("\n");

    }
return 0;
}