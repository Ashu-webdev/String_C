/* To find out the length of any string using a user defined function XSTRLEN()*/
#include<stdio.h>


int xstrlen(char str[20]);
int main()
{
    char str[20],x;
    printf("Enter a string:");
    gets(str);
    puts(str);
    x=xstrlen(str);
    printf("Length of string is %d\n",x);
}


int xstrlen(char str[])
{
   int count0,i=0,count=0;
   while (str[i]!='\0')
   {
      count++;
      i++;
   }
   return count;   
   
}   
