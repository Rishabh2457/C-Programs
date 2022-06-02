#include <stdio.h>
#include <string.h>
void main()
{
    char str[1000],c;
    int len,i,count=0,temp=1;
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    printf("Enter the character : ");
    scanf("%s",&c);
    len= strlen(str);
    for(i=len;i>0;i--)
    {
         if(temp)
        {
             if(c==str[i])
            {
                temp=0;
                 str[i]=str[i+1];
            }
        }
        else
         str[i]=str[i+1];
        
        }
            
    printf("After removing the first occurence of character : %s\n",str);
    
}
   


