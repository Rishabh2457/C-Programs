#include <stdio.h>
int main()
{
    float f,c;
    printf("Temperature in celcius : ");
    scanf("%f",&f);
    c = f*9/5+32;
    printf("Temperature in fahrenheit : %f",c);
    return 0 ;
}