#include <stdio.h>
#include <string.h>

void main()
{
    int i,c=0;
    char s[1000];
    printf("Enter the string : ");
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
    
}