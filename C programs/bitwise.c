#include <stdio.h>
int main()
{
    int a = 10 , b = 30;
    int k = printf("%d\n",a|b);
    printf("%d\n",k);
    printf("%d\n",a^b);
    printf("%d",a&b);
    return 0;
}