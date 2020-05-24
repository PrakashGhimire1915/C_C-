#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char string(char str)
{
    char str[100];
    printf("Enter string:");
    scanf("%s",str);
}
char string(char str)
{
    char str;
    printf("Enter a string");
    scanf("s",str);
    strlen(str);
}
int main()
{
    int i=0,j=0,ch;
    char temp;
    printf("\n1.Reverse string \n2.String length\n");
    j=strlen(str)-1;
    while(i<j)
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;
            }
  do
   {
    printf("Enter your choice:");
    scanf("%d",ch);
    switch(ch)
       {
       case 1:
            string(str);
            break;
       case 2:
            string(str);
            break;
       default:
            printf("Invalid Choice!!!");
   }}while(ch<2);
    return 0;
}
