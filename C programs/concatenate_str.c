#include <stdio.h>
#include <string.h>
 void main()
 {  int i,j;
     char str[1000],str1[1000],str2[1000];
     printf("Enter the first string : \n");
     gets(str);
     printf("Enter the Second string : \n");
     gets(str1);
     for(i=0;str[i]!= '\0';i++)
     {
        str2[i] = str[i]+str1[i];
     }
     for(j=0;str1[j]!= '\0';j++,i++)
     {
         str[i]=str1[j];
     }
     puts(str);
 }