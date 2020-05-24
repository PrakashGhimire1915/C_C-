#include <stdio.h>
#include <stdlib.h>
struct student{
                int id;
                char nam[40];
                char add[40];
                }s[100];
int main()
{
    int i,n;
    printf("Enter how many records you want to enter:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the name:\n");
        scanf("%s",s[i].nam);
        printf("Enter student id:\n");
        scanf("%d",&s[i].id);
        printf("Enter the address:\n");
        scanf("%s",s[i].add);
    }
    student temp;
    for(i=0; i<n; i++)
    {
    for(j=0; j<n-i-1; j++)
    {
    if(strcmp(s[j].nam,s[j+1].nam)>0)
    {
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
    }
    }
    }
for(i=0; i<n; i++)
printf("\n%s\t%d",s[i].nam,s[i].add,s[i].id);
return 0;
}
