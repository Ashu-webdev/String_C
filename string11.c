/* To extract a substring from an inputted string and position from which to start the substring and length of substring to be inputted*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20],substr[20];
    int pos,len,i,j=0;
    printf("Enter any string:");
    scanf("%[n\n]s",str);
    gets(str);
    printf("Enter the position and the length:");
    scanf("%d%d",&pos,&len);
    i=pos;
    while(str[i]!='\0'&&len>=0)
    {
      substr[j]=str[i];
      i++;
      j++;
      len--;
    }
    substr[j]='\0';
    printf("Extracted  string is %s",substr);
}   
