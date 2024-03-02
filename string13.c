/* To concatenate one string at the end of another string using a user defined function XSTRCAT()*/
#include<stdio.h>
void xstrcat(char[],char[]);
int main()
{
   char source[30],target[10];
   printf("Enter any two strings:");
   scanf("%s%s",source,target);
   xstrcat(source,target);
   printf("After concatenation the string is %s",source);
}


void xstrcat(char source[30],char target[20])
{
	int i,len=0;
	for(i=0;source[i]!='\0';i++)
	   len++;
        for(i=0;target[i]!='\0';i++)
        {
		source[len+i]=target[i];
        }
          source='\0';
  
}

      
