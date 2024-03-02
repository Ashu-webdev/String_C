/* To extract first n chracters of any string*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char str[20],substr[20];
   int i=0,n;
   printf("Enter any string:");
   scanf("%[n\n]s",str);
   gets(str);
   printf("Enter how many characters are to be extracted:");
   scanf("%d",&n);
   while(str[i]!='\0'&& i<n)
   {
     substr[i]=str[i];
     i++;
   }
   substr[i]='\0';  
   printf("Extracted string is %s",substr);
}   
