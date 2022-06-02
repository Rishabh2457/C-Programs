#include <stdio.h>
#include <string.h>

void main()
{
    char str[100],result;
   
    int i ,len;
    int freq[1000]={0};
    printf("Enter the string : ");
    
    gets(str);
    
    len = strlen(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<1000;i++)
    {
     
          if(freq[i]!= 0 ){
           printf("%c=%d\n",i,freq[i]);
          }
    }
    
}