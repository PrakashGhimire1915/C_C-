#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct employee
{
    int id;
    char nam[50],add[50];
}e[100];
void record(struct employee e[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("ID:\t");
        scanf("%d",&e[i].id);
        printf("Name:\t");
        scanf("%s",e[i].nam);
        printf("Address:\t");
        scanf("%s",e[i].add);
    }
}
void display(struct employee e[],int n)
{
    int i,j;
    struct employee temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(strcmp(e[j].nam,e[j+1].nam)>0)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("\n%d \t%s %s",e[i].id,e[i].nam,e[i].add);
    }
}
int main()
{
    int n;
    printf("Enter number of records you want to enter:");
    scanf("%d",&n);
    record(e,n);
    display(e,n);
    return 0;
}
