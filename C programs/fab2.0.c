#include <stdio.h>
int main()
{
    int t1=0;
    int t2=1;
    int next_terms=t1+t2;
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("fabonacci series is : %d, %d, ",t1, t2);
    for(int i=3;i<=n;++i)
    {
        printf("%d ,",next_terms);
  
    t1=t2;
    t2=next_terms;
    next_terms=t1+t2;
    }

return 0;
}


