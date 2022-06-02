#include <stdio.h>
int main()
{
    float f,c;
    printf("temperature in fahrenheit : ");
    scanf("%f",&f);
    c =(f-32)*5/9;
    printf("temperature in celcius : %f",c);
    return 0 ;    
}