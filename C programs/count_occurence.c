#include <stdio.h>
#include <string.h>
void main()
{
    char str[1000],c;
    int len,i,count=0;
    scanf("%[^\n]",str);
    printf("Enter the character : ");
    scanf("%s",&c);
    len= strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==c){
            count++;
        }
        
    }
    printf("All occurence of the character : %d\n",count);
    
}
   

