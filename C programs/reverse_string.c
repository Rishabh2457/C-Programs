#include <stdio.h>
#include <string.h>

void main()
{
    int i,l;
    char s[1000];
    printf("Enter the string : \n");
    scanf("%[^\n]",s);
    l = strlen(s);
    for(i=l;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}