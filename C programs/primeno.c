#include <stdio.h>
int main()
{
    int num,sum=0,;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i = 2;i<=num;i++)
    {
        int c = 0;
        for(int j = 2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
           
        }
    }
         if (c==0)
            {   sum=sum+i;
                printf("%d ",sum);
            }
    
    return 0;
}
