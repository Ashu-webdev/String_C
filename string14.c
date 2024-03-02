/* To copy the content of one string to another string using a user-defined function XSTRCOPY()*/
#include<stdio.h>
void  xstrcpy(char[],char[]);
int main()
{ 
   char str1[30],str2[30];
   printf("Enter any string:");
   gets(str1);
   xstrcpy(str1,str2);
   printf("Copied string is :%s\n",str2);
}

void xstrcpy(char str1[30],char str2[30])
{
	int i;
	for (i=0;str1[i]!=0;i++)
	{
	   str2[i]=str1[i];
        }
        str2[i]='\0';
	
}	
