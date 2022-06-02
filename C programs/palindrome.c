#include <stdio.h>
#include <string.h>

void main()
{
    int i,l,t=0;
    char s[1000];
    printf("Enter the string : \n");
    scanf("%[^\n]",s);
    l = strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        printf("string is palindrome.");
    }
    else
    {
        printf("string is not palindrome.");
    }
}