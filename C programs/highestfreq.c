#include <stdio.h>
#include <string.h>

void main()
{
    char str[100],result;
   
    int i ,len;
    int max=100;
    int freq[1000]={0};
    printf("Enter the string : ");
    
    gets(str);
    
    len = strlen(str);
    
    for(i=0;i<len;i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<len;i++)
    {
      if(max > freq[str[i]])
      {
          max= freq[str[i]];
          result=str[i];
      }
    }
    printf("%c\n%d",result,max);
}