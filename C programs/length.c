#include <stdio.h>
#include <string.h>
void main()
{
    char str[1000];
    int i;

    printf("Enter the string : ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++);
    
        printf("%d",i);
    
}