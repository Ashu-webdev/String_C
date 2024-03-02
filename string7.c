/* To enter any string and count no of characters present*/
#include<stdio.h>
#include<string.h>
int main()
{
   char str[10];
   int len;
   printf("Enter any string:");
   scanf("%s",str);
   printf("%s\n",str);
   len=strlen(str);
   printf("String=%s characters=%d",str,len);
}
    
