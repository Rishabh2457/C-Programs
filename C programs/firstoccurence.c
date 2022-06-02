#include <stdio.h>
#include <String.h>
void main()
{
    char str[1000],c;
    int len,i;
    scanf("%[^\n]",str);
    printf("Enter the character : ");
    scanf("%s",&c);
    len= strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==c)
        {
            printf("%d",i+1);
            break;
        }
        
    }
    
    
}
   

