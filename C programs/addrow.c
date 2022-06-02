//WAP to add row elements in 2d array
#include <stdio.h>
void main()
{
    int a[5][5],i,j,n;
    //printf("Enter the size of array : ");
    //scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {   int sum=0;
        for(j=0;j<3;j++)
        {
            sum= sum + a[i][j];
           
        }
         printf("%d\n",sum);
        
    }

}