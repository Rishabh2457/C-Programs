#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter the radius of sphere : ");
    scanf("%f",&a);
    b = 1.33*3.14*(a*a*a);
    printf("VOlume of the sphere : %.2f",b);
    return 0 ;
}