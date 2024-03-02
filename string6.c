/* To enter a multiword string and comnvert it to lowercase without using library function*/
#include<stdio.h>
int  main()
{
   char str[30];
   int i;
   printf("Enter any string:");
   scanf("%[n\n]s",str);
   gets(str);
   for (i=0;str[i]!='\0';i++)
   {
     if (str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
   }
   printf("Lowercase string:%s",str);
}   
