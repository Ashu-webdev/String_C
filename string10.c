/* To extract the last n character of any string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str[20],substr[20];
   int i,j,n;
   printf("Enter any string:");
   gets(str);
   printf("Enter how many characters to be extracted:");
   scanf("%d",&n);
   i=0;
   j=strlen(str)-n;
   while(str[j]!='\0')
   {
     substr[i]=str[j];
     i++;
     j++;
   }
   substr[i]='\0';
   printf("Extracted string is %s",substr);
}   
