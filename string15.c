/* To compare the strings using a user defined function xstrcmp()*/
#include<stdio.h>
int xstrcmp(char str1[],char str2[]);
int main()
{
   char str1[20],str2[20],temp;
   printf("Enter 1st string:");
   gets(str1);
   printf("Enter 2nd string:");
   gets(str2);
   temp=xstrcmp(str1,str2);
   if (temp==0)
   {
     printf("Given strings are same\n");
   }
   else
   {
    printf("Given strings are different\n");
   }
} 
   
int xstrcmp(char str1[20],char str2[20])
{
   int temp,i,len1=0,len2=0,flag=0;
   for (i=0;str1[i]='\0';i++)
   {
	 len1++;
   }
   for (i=0;str2[i]!='\0';i++)
   {
	 len2++;
   }
   if (len1!=len2)
   {
      return 1;
   }
  else
  {
      for (i=0;i<len1;i++)
      {
        if (str1[i]==str2[i])
        {
           flag=0;
           break;
        }
	else 
		flag=1;
      }	
  }
}  
