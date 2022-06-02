#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the length in cm : ");
    scanf("%f",&a);
    b = a/100;
    c = a/(100*1000);
    printf("Length in meter : %f\n",b);
    printf("Length in kilometer : %f",c);
    return 0;
}